
@interface VNTorsoprint : VNEspressoModelImageprint <VNEntityIdentificationModelPrint> {
    float  _confidence;
}

@property (readonly) unsigned long long VNEntityIdentificationModelPrintByteLength;
@property (readonly) NSData *VNEntityIdentificationModelPrintData;
@property (readonly) unsigned long long VNEntityIdentificationModelPrintElementCount;
@property (readonly) unsigned long long VNEntityIdentificationModelPrintElementType;
@property (readonly, copy) VNRequestSpecifier *VNEntityIdentificationModelPrintOriginatingRequestSpecifier;
@property (nonatomic, readonly) float confidence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)codingTypesToCodingKeys;
+ (unsigned long long)confidenceTypeForOriginatingRequestSpecifier:(id)arg1;
+ (unsigned int)currentCodingVersion;
+ (unsigned long long)currentSerializationVersion;
+ (id)currentVersion;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;
+ (id)emptyTorsoprintDataForRevision:(unsigned long long)arg1;
+ (unsigned long long)serializationMagicNumber;
+ (bool)shouldAssumeOriginatingRequestClassForHeaderSerializationVersion:(unsigned int)arg1;
+ (bool)shouldIgnoreLagecyLabelsAndConfidenceForHeaderSerializationVersion:(unsigned int)arg1;
+ (bool)supportsSecureCoding;

- (unsigned long long)VNEntityIdentificationModelPrintByteLength;
- (id)VNEntityIdentificationModelPrintData;
- (unsigned long long)VNEntityIdentificationModelPrintElementCount;
- (unsigned long long)VNEntityIdentificationModelPrintElementType;
- (id)VNEntityIdentificationModelPrintOriginatingRequestSpecifier;
- (float)confidence;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(const void*)arg1 elementCount:(unsigned long long)arg2 elementType:(unsigned long long)arg3 lengthInBytes:(unsigned long long)arg4 confidence:(float)arg5 originatingRequestSpecifier:(id)arg6;
- (id)initWithData:(const void*)arg1 elementCount:(unsigned long long)arg2 elementType:(unsigned long long)arg3 lengthInBytes:(unsigned long long)arg4 confidence:(float)arg5 requestRevision:(unsigned long long)arg6;
- (id)initWithState:(id)arg1 byteOffset:(unsigned long long*)arg2 error:(id*)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentToVNEntityIdentificationModelPrint:(id)arg1;
- (unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id*)arg3;
- (unsigned long long)serializedLength;

@end
