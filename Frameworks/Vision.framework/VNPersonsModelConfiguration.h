
@interface VNPersonsModelConfiguration : NSObject <NSCopying, NSSecureCoding> {
    VNPersonsModelAlgorithm * _algorithm;
    NSNumber * _explicitlySetMaximumIdentities;
    NSNumber * _explicitlySetMaximumTrainingFaceprintsPerIdentity;
    unsigned long long  _faceprintRequestRevision;
}

@property (nonatomic, copy) VNPersonsModelAlgorithm *algorithm;
@property (nonatomic) unsigned long long faceprintRequestRevision;
@property (nonatomic) unsigned long long maximumIdentities;
@property (nonatomic) unsigned long long maximumTrainingFaceprintsPerIdentity;

+ (unsigned long long)maximumAllowableFaceprintsPerIdentity;
+ (unsigned long long)maximumAllowableIdentities;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)algorithm;
- (id)algorithmOfClass:(Class)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (int)faceID2ModelMaximumElementsPerID;
- (int)faceID3IndexMode;
- (int)faceID3ModelMaximumElementsPerID;
- (int)faceID3ModelMaximumIDs;
- (int)faceID3ModelSeed;
- (unsigned long long)faceprintRequestRevision;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)maximumIdentities;
- (unsigned long long)maximumTrainingFaceprintsPerIdentity;
- (id)resolvedAlgorithmAndReturnError:(id*)arg1;
- (void)setAlgorithm:(id)arg1;
- (void)setFaceprintRequestRevision:(unsigned long long)arg1;
- (void)setMaximumIdentities:(unsigned long long)arg1;
- (void)setMaximumTrainingFaceprintsPerIdentity:(unsigned long long)arg1;

@end
