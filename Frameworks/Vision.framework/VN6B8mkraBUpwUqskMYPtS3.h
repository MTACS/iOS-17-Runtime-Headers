
@interface VN6B8mkraBUpwUqskMYPtS3 : VNEspressoModelImageprint {
    unsigned long long  _imageSignatureHashType;
}

@property unsigned long long imageSignatureHashType;

+ (unsigned int)currentCodingVersion;
+ (unsigned long long)currentSerializationVersion;
+ (id)currentVersion;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;
+ (unsigned long long)serializationMagicNumber;
+ (bool)shouldAssumeOriginatingRequestClassForHeaderSerializationVersion:(unsigned int)arg1;
+ (bool)supportsSecureCoding;

- (id)encodeHashDescriptorWithBase64EncodingAndReturnError:(id*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)imageSignatureHashType;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(const void*)arg1 elementCount:(unsigned long long)arg2 elementType:(unsigned long long)arg3 lengthInBytes:(unsigned long long)arg4 imageSignatureHashType:(unsigned long long)arg5 requestRevision:(unsigned long long)arg6;
- (id)initWithState:(id)arg1 byteOffset:(unsigned long long*)arg2 error:(id*)arg3;
- (id)initWithState:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id*)arg3;
- (unsigned long long)serializedLength;
- (void)setImageSignatureHashType:(unsigned long long)arg1;

@end
