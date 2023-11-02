
@interface VNSceneprint : VNEspressoModelImageprint {
    NSDictionary * _labelsAndConfidence;
}

@property (readonly, copy) NSDictionary *labelsAndConfidence;

+ (id)codingTypesToCodingKeys;
+ (unsigned long long)confidenceTypeForOriginatingRequestSpecifier:(id)arg1;
+ (unsigned int)currentCodingVersion;
+ (unsigned long long)currentSerializationVersion;
+ (id)currentVersion;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;
+ (unsigned long long)serializationMagicNumber;
+ (bool)shouldAssumeOriginatingRequestClassForHeaderSerializationVersion:(unsigned int)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(const void*)arg1 elementCount:(unsigned long long)arg2 elementType:(unsigned long long)arg3 lengthInBytes:(unsigned long long)arg4 labelsAndConfidence:(id)arg5 requestRevision:(unsigned long long)arg6;
- (id)initWithState:(id)arg1 byteOffset:(unsigned long long*)arg2 error:(id*)arg3;
- (id)labelsAndConfidence;
- (unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id*)arg3;
- (unsigned long long)serializedLength;

@end
