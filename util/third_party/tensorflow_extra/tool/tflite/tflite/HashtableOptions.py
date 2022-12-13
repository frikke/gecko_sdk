# automatically generated by the FlatBuffers compiler, do not modify

# namespace: tflite

import flatbuffers
from flatbuffers.compat import import_numpy
np = import_numpy()

class HashtableOptions(object):
    __slots__ = ['_tab']

    @classmethod
    def GetRootAs(cls, buf, offset=0):
        n = flatbuffers.encode.Get(flatbuffers.packer.uoffset, buf, offset)
        x = HashtableOptions()
        x.Init(buf, n + offset)
        return x

    @classmethod
    def GetRootAsHashtableOptions(cls, buf, offset=0):
        """This method is deprecated. Please switch to GetRootAs."""
        return cls.GetRootAs(buf, offset)
    @classmethod
    def HashtableOptionsBufferHasIdentifier(cls, buf, offset, size_prefixed=False):
        return flatbuffers.util.BufferHasIdentifier(buf, offset, b"\x54\x46\x4C\x33", size_prefixed=size_prefixed)

    # HashtableOptions
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # HashtableOptions
    def TableId(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(4))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Int32Flags, o + self._tab.Pos)
        return 0

    # HashtableOptions
    def KeyDtype(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Int8Flags, o + self._tab.Pos)
        return 0

    # HashtableOptions
    def ValueDtype(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(8))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Int8Flags, o + self._tab.Pos)
        return 0

def HashtableOptionsStart(builder): builder.StartObject(3)
def Start(builder):
    return HashtableOptionsStart(builder)
def HashtableOptionsAddTableId(builder, tableId): builder.PrependInt32Slot(0, tableId, 0)
def AddTableId(builder, tableId):
    return HashtableOptionsAddTableId(builder, tableId)
def HashtableOptionsAddKeyDtype(builder, keyDtype): builder.PrependInt8Slot(1, keyDtype, 0)
def AddKeyDtype(builder, keyDtype):
    return HashtableOptionsAddKeyDtype(builder, keyDtype)
def HashtableOptionsAddValueDtype(builder, valueDtype): builder.PrependInt8Slot(2, valueDtype, 0)
def AddValueDtype(builder, valueDtype):
    return HashtableOptionsAddValueDtype(builder, valueDtype)
def HashtableOptionsEnd(builder): return builder.EndObject()
def End(builder):
    return HashtableOptionsEnd(builder)