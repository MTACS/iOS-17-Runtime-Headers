
@interface HKConcept : NSObject <NSSecureCoding> {
    NSArray * _attributes;
    bool  _deleted;
    HKConceptIdentifier * _identifier;
    bool  _isUndefined;
    unsigned long long  _options;
    NSArray * _relationships;
    long long  _version;
}

@property (nonatomic, readonly, copy) HKMedicalCoding *LOINCCoding;
@property (nonatomic, readonly, copy) HKMedicalCoding *RxNormCoding;
@property (nonatomic, readonly, copy) NSString *adHocCode;
@property (nonatomic, readonly, copy) NSArray *attributes;
@property (nonatomic, readonly, copy) HKConcept *chartedWithConcept;
@property (nonatomic, readonly) bool chartsBloodPressure;
@property (nonatomic, readonly, copy) HKMedicalCoding *coding;
@property (getter=isDeleted, nonatomic, readonly) bool deleted;
@property (nonatomic, readonly, copy) HKConcept *groupByConcept;
@property (nonatomic, readonly) bool hidesOutOfRangeFilter;
@property (nonatomic, readonly, copy) HKConceptIdentifier *identifier;
@property (nonatomic, readonly) bool isAdHoc;
@property (nonatomic, readonly) bool isGeneric;
@property (nonatomic, readonly) bool isInMemory;
@property (nonatomic, readonly) bool isLowUtility;
@property (nonatomic, readonly) bool isNebulous;
@property (nonatomic, readonly) bool isQualifiedForConceptRoom;
@property (nonatomic, readonly) bool isUndefined;
@property (nonatomic, readonly, copy) NSString *localizedPreferredName;
@property (nonatomic, readonly) NSString *meds_englishUSName;
@property (nonatomic, readonly) bool meds_isClinicalProduct;
@property (nonatomic, readonly) bool meds_isIngredientProduct;
@property (nonatomic, readonly) bool meds_isRoutedDoseFormProduct;
@property (nonatomic, readonly) bool meds_isSpecificProduct;
@property (nonatomic, readonly) bool meds_isTradeNameProduct;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly, copy) NSString *preferredName;
@property (nonatomic, readonly, copy) NSArray *relationships;
@property (nonatomic, readonly) bool relationshipsAreLoaded;
@property (nonatomic, readonly, copy) NSArray *synonyms;
@property (nonatomic, readonly, copy) NSSet *validInRegions;
@property (nonatomic, readonly) long long version;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)conceptWithIdentifier:(id)arg1 attributes:(id)arg2 relationships:(id)arg3;
+ (id)fallbackLanguagesForLocale:(id)arg1;
+ (id)preferredLanguages;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)LOINCCoding;
- (id)RxNormCoding;
- (void)_appendSortedAttributeTypeCountDescriptionToString:(id)arg1;
- (void)_appendTreeDescriptionToString:(id)arg1 visitedStack:(id)arg2;
- (id)_sortedRelationships;
- (id)adHocCode;
- (id)allConceptsOfRelationshipType:(long long)arg1;
- (id)attributes;
- (id)attributesForType:(long long)arg1;
- (id)chartedWithConcept;
- (bool)chartsBloodPressure;
- (id)coding;
- (id)copyWithRelationships:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateAttributesWithType:(long long)arg1 block:(id /* block */)arg2;
- (id)firstAttributeForType:(long long)arg1;
- (id)firstConceptOfRelationshipType:(long long)arg1;
- (id)groupByConcept;
- (unsigned long long)hash;
- (bool)hidesOutOfRangeFilter;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 attributes:(id)arg2 relationships:(id)arg3 version:(long long)arg4 deleted:(bool)arg5 options:(unsigned long long)arg6;
- (bool)isAdHoc;
- (bool)isDeleted;
- (bool)isEqual:(id)arg1;
- (bool)isGeneric;
- (bool)isInMemory;
- (bool)isLowUtility;
- (bool)isNebulous;
- (bool)isUndefined;
- (id)localizedPreferredName;
- (void)mutateBySettingRelationships:(id)arg1;
- (unsigned long long)options;
- (id)preferredName;
- (id)relationships;
- (bool)relationshipsAreLoaded;
- (id)stringsForAttributeType:(long long)arg1;
- (id)synonyms;
- (id)treeDescription;
- (id)validInRegions;
- (long long)version;

// Image: /System/Library/PrivateFrameworks/HealthMedications.framework/HealthMedications

- (bool)_meds_isA:(long long)arg1;
- (id)meds_englishUSName;
- (bool)meds_isClinicalProduct;
- (bool)meds_isIngredientProduct;
- (bool)meds_isRoutedDoseFormProduct;
- (bool)meds_isSpecificProduct;
- (bool)meds_isTradeNameProduct;
- (id)meds_preferredNameForFirstObjectOfRelationshipType:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

- (bool)isQualifiedForConceptRoom;

@end
