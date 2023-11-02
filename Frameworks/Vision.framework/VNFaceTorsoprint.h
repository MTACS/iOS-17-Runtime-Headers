
@interface VNFaceTorsoprint : VNEspressoModelImageprint {
    VNFaceprint * _faceprint;
    unsigned long long  _personId;
    VNTorsoprint * _torsoprint;
}

@property (nonatomic, readonly) VNFaceprint *faceprint;
@property (nonatomic) unsigned long long personId;
@property (nonatomic, readonly) VNTorsoprint *torsoprint;
@property (getter=isValidFaceprint, nonatomic, readonly) bool validFaceprint;
@property (getter=isValidTorsoprint, nonatomic, readonly) bool validTorsoprint;

+ (id)codingTypesToCodingKeys;
+ (unsigned int)currentCodingVersion;
+ (unsigned long long)currentSerializationVersion;
+ (id)currentVersion;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;
+ (bool)shouldAssumeOriginatingRequestClassForHeaderSerializationVersion:(unsigned int)arg1;
+ (bool)shouldIgnoreLagecyLabelsAndConfidenceForHeaderSerializationVersion:(unsigned int)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)computeDistance:(id)arg1 withDistanceFunction:(unsigned long long)arg2 error:(id*)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)faceprint;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(const void*)arg1 elementCount:(unsigned long long)arg2 elementType:(unsigned long long)arg3 lengthInBytes:(unsigned long long)arg4 faceprintConfidence:(float)arg5 torsoprintConfidence:(float)arg6;
- (id)initWithData:(const void*)arg1 elementCount:(unsigned long long)arg2 elementType:(unsigned long long)arg3 lengthInBytes:(unsigned long long)arg4 faceprintConfidence:(float)arg5 torsoprintConfidence:(float)arg6 originatingRequestSpecifier:(id)arg7;
- (id)initWithFaceprint:(id)arg1 torsoPrint:(id)arg2 originatingRequestSpecifier:(id)arg3;
- (id)initWithFaceprint:(id)arg1 torsoPrint:(id)arg2 requestRevision:(unsigned long long)arg3;
- (id)initWithFaceprint:(id)arg1 torsoprint:(id)arg2;
- (id)initWithState:(id)arg1 byteOffset:(unsigned long long*)arg2 error:(id*)arg3;
- (bool)isValidFaceprint;
- (bool)isValidTorsoprint;
- (unsigned long long)personId;
- (id)serializeStateAndReturnError:(id*)arg1;
- (unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id*)arg3;
- (unsigned long long)serializedLength;
- (void)setPersonId:(unsigned long long)arg1;
- (id)torsoprint;

@end
