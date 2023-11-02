
@interface HKAllergyReaction : NSObject <HKCodedObject, NSCopying, NSSecureCoding> {
    NSArray * _manifestationCodings;
    NSArray * _manifestations;
    HKMedicalDate * _onsetDate;
    HKConcept * _severity;
    HKMedicalCoding * _severityCoding;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *manifestationCodingCollections;
@property (nonatomic, readonly, copy) NSArray *manifestationCodings;
@property (nonatomic, readonly, copy) NSArray *manifestations;
@property (nonatomic, readonly, copy) HKMedicalDate *onsetDate;
@property (nonatomic, readonly, copy) HKConcept *severity;
@property (nonatomic, readonly, copy) HKMedicalCoding *severityCoding;
@property (nonatomic, readonly, copy) HKMedicalCodingCollection *severityCodingCollection;
@property (readonly) Class superclass;

+ (id)allergyReactionWithManifestationCodings:(id)arg1 onsetDate:(id)arg2 severityCoding:(id)arg3;
+ (id)indexableKeyPathsWithPrefix:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setManifestationCodings:(id)arg1;
- (void)_setSeverityCoding:(id)arg1;
- (bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
- (id)codingsForKeyPath:(id)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithManifestationCodings:(id)arg1 onsetDate:(id)arg2 severityCoding:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)manifestationCodingCollections;
- (id)manifestationCodings;
- (id)manifestations;
- (id)onsetDate;
- (id)severity;
- (id)severityCoding;
- (id)severityCodingCollection;

@end
