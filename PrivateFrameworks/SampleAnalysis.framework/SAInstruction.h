
@interface SAInstruction : NSObject <SASerializable> {
    SABinary * _binary;
    unsigned long long  _offsetIntoSegment;
    SASegment * _segment;
    id  _sourceInfoOrSourceInfos;
    id  _symbolOrSymbols;
}

@property (readonly) SABinary *binary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) long long offsetIntoBinary;
@property (readonly) unsigned long long offsetIntoSegment;
@property (readonly) unsigned long long offsetIntoTextSegment;
@property (readonly) SASegment *segment;
@property (readonly) SASourceInfo *sourceInfo;
@property (readonly) Class superclass;
@property (readonly) SASymbol *symbol;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2;

- (void).cxx_destruct;
- (bool)addSelfToBuffer:(struct { unsigned char x1; unsigned char x2; unsigned long long x3; unsigned char x4[16]; struct { unsigned long long x_5_1_1; unsigned long long x_5_1_2; unsigned long long x_5_1_3; unsigned long long x_5_1_4; unsigned long long x_5_1_5; unsigned long long x_5_1_6; unsigned int x_5_1_7; unsigned int x_5_1_8; } x5; unsigned long long x6; unsigned char x7; }*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (id)binary;
- (id)debugDescription;
- (unsigned long long)enumerateSymbols:(id /* block */)arg1;
- (bool)hasOffsetIntoBinary;
- (bool)hasSourceInfo;
- (unsigned long long)numSymbols;
- (long long)offsetIntoBinary;
- (unsigned long long)offsetIntoSegment;
- (unsigned long long)offsetIntoTextSegment;
- (void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (id)segment;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (id)sourceInfo;
- (id)symbol;
- (bool)symbolicateWithOptions:(unsigned long long)arg1 pid:(int)arg2;

@end
