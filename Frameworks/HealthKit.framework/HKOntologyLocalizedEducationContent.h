
@interface HKOntologyLocalizedEducationContent : HKUserDomainConceptProperty <HDCoding, NSFastEnumeration> {
    NSArray * _sections;
}

@property (nonatomic, readonly) long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) HKOntologyLocalizedEducationContentSection *primarySection;
@property (nonatomic, readonly, copy) NSArray *sections;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_mergeDataFromSectionsInto:(id)arg1 fromContent:(id)arg2 options:(unsigned long long)arg3;
+ (id)mergeListsOfPropertiesWithType:(long long)arg1 intoListOfProperties:(id)arg2 fromListOfProperties:(id)arg3 options:(unsigned long long)arg4;
+ (id)nullPropertyWithVersion:(long long)arg1;
+ (id)nullPropertyWithVersion:(long long)arg1 timestamp:(double)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_sectionsUniquedByLocaleSectionTypePairing;
- (id)allSectionsWithType:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)firstSectionWithType:(long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSections:(id)arg1 version:(long long)arg2 timestamp:(double)arg3 deleted:(bool)arg4;
- (id)initWithType:(long long)arg1 version:(long long)arg2 timestamp:(double)arg3 deleted:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (id)primarySection;
- (id)sections;
- (id)valueDescription;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;

- (id)codableRepresentationForSync;

@end
