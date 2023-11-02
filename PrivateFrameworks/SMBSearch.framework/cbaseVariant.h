
@interface cbaseVariant : NSObject {
    vtSafeArray * _arrObj;
    NSNumber * _scalarValue;
    utf16leData * _strData;
    unsigned char  _vData1;
    unsigned char  _vData2;
    unsigned short  _vType;
    vtVector * _vectObj;
}

@property (retain) vtSafeArray *arrObj;
@property (readonly, retain) NSNumber *scalarValue;
@property (readonly, retain) utf16leData *strData;
@property (readonly) unsigned char vData1;
@property (readonly) unsigned char vData2;
@property (readonly) unsigned short vType;
@property (retain) vtVector *vectObj;

- (void).cxx_destruct;
- (id)arrObj;
- (int)encodeArray:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int*)arg3;
- (int)encodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int*)arg3;
- (int)encodeIntArray:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int*)arg3;
- (int)encodeIntVector:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int*)arg3;
- (int)encodeStrArray:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int*)arg3;
- (int)encodeStrVector:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int*)arg3;
- (int)encodeVector:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int*)arg3;
- (id)init;
- (id)scalarValue;
- (void)setArrObj:(id)arg1;
- (int)setArrayWithType:(unsigned short)arg1 ValueArray:(id)arg2;
- (int)setIntArrayType:(unsigned int)arg1 ValueArray:(id)arg2;
- (int)setIntVectorType:(unsigned int)arg1 ValueArray:(id)arg2;
- (int)setScalarType:(unsigned short)arg1 ScalarValue:(id)arg2;
- (int)setStrArrayType:(unsigned short)arg1 ValueArray:(id)arg2;
- (int)setStrVectorType:(unsigned short)arg1 ValueArray:(id)arg2;
- (int)setStringType:(unsigned short)arg1 UTF8Str:(id)arg2;
- (void)setVectObj:(id)arg1;
- (int)setVectorWithType:(unsigned short)arg1 ValueArray:(id)arg2;
- (id)strData;
- (unsigned char)vData1;
- (unsigned char)vData2;
- (unsigned short)vType;
- (id)vectObj;

@end
