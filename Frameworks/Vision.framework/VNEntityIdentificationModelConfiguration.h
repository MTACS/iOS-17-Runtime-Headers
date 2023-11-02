
@interface VNEntityIdentificationModelConfiguration : NSObject <NSCopying, NSSecureCoding> {
    VNEntityIdentificationModelAlgorithm * _algorithm;
    VNRequestSpecifier * _entityPrintOriginatingRequestSpecifier;
    unsigned long long  _maximumEntities;
    unsigned long long  _maximumTrainingPrintsPerEntity;
}

@property (readonly, copy) NSArray *acceptableEntityPrintOriginatingRequestSpecifiers;
@property (nonatomic, copy) VNEntityIdentificationModelAlgorithm *algorithm;
@property (readonly, copy) VNRequestSpecifier *entityPrintOriginatingRequestSpecifier;
@property unsigned long long maximumEntities;
@property unsigned long long maximumTrainingPrintsPerEntity;

+ (unsigned long long)maximumAllowableEntities;
+ (unsigned long long)maximumAllowableFaceprintsPerIdentity;
+ (id)newConfigurationForEntityPrintsGeneratedByRequest:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)acceptableEntityPrintOriginatingRequestSpecifiers;
- (id)algorithm;
- (id)algorithmOfClass:(Class)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entityPrintOriginatingRequestSpecifier;
- (int)faceID3IndexMode;
- (int)faceID3ModelMaximumElementsPerID;
- (int)faceID3ModelMaximumIDs;
- (int)faceID3ModelSeed;
- (int)faceIDModelMaximumElementsPerID;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntityPrintOriginatingRequestSpecifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)maximumEntities;
- (unsigned long long)maximumTrainingPrintsPerEntity;
- (id)resolvedAlgorithmAndReturnError:(id*)arg1;
- (void)setAlgorithm:(id)arg1;
- (void)setMaximumEntities:(unsigned long long)arg1;
- (void)setMaximumTrainingPrintsPerEntity:(unsigned long long)arg1;

@end
