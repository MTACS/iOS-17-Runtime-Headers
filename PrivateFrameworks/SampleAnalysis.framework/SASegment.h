
@interface SASegment : NSObject <SAJSONSerialization, SASerializable> {
    SABinary * _binary;
    NSMutableDictionary * _inlineSymbols;
    NSMutableDictionary * _instructions;
    unsigned long long  _length;
    NSString * _name;
    long long  _offsetIntoBinary;
    NSMutableArray * _symbols;
}

@property (readonly) SABinary *binary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long length;
@property (readonly) NSString *name;
@property (readonly) long long offsetIntoBinary;
@property (readonly) Class superclass;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;

- (void).cxx_destruct;
- (bool)addSelfToBuffer:(struct { unsigned char x1; unsigned char x2; unsigned char x3[16]; BOOL x4[64]; long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; }*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (id)binary;
- (id)debugDescription;
- (bool)hasOffsetIntoBinary;
- (id)initWithBinary:(id)arg1 name:(id)arg2 length:(unsigned long long)arg3 offsetIntoBinary:(long long)arg4;
- (id)instructionAtOffsetIntoSegment:(unsigned long long)arg1;
- (unsigned long long)length;
- (id)name;
- (long long)offsetIntoBinary;
- (void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)writeJSONDictionaryEntriesToStream:(id)arg1;

@end
