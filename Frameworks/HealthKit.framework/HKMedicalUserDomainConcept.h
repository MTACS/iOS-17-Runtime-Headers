
@interface HKMedicalUserDomainConcept : HKUserDomainConcept <NSSecureCoding> {
    NSArray * _categoryTypes;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _computedPropertyLock;
    NSString * _countryCode;
    NSDictionary * _preferredNameByLocaleIdentifier;
    HKMedicalUserDomainConceptSemanticIdentifier * _semanticIdentifier;
}

@property (nonatomic, readonly, copy) NSArray *categoryTypes;
@property (nonatomic, readonly) bool chartsBloodPressure;
@property (nonatomic, readonly, copy) NSString *countryCode;
@property (nonatomic, readonly, copy) HKOntologyLocalizedEducationContent *educationContent;
@property (nonatomic, readonly) bool hidesOutOfRangeFilter;
@property (nonatomic, readonly) bool isLowUtility;
@property (nonatomic, readonly, copy) NSString *ontologyPreferredName;
@property (nonatomic, readonly, copy) NSDictionary *preferredNameByLocaleIdentifier;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_typeIdentifier;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dataDescription;
- (id)_deepCopy;
- (id)_generateSemanticIdentifier;
- (void)_setCategoryTypes:(id)arg1;
- (void)_setCountryCode:(id)arg1;
- (bool)canRequestSyncUponInsertion;
- (id)categoryTypes;
- (bool)chartsBloodPressure;
- (id)countryCode;
- (id)educationContent;
- (void)encodeWithCoder:(id)arg1;
- (bool)hidesOutOfRangeFilter;
- (id)init;
- (id)initWithCategoryTypes:(id)arg1;
- (id)initWithCategoryTypes:(id)arg1 countryCode:(id)arg2 codingCollection:(id)arg3 propertyCollection:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithCodingCollection:(id)arg1 linkCollection:(id)arg2 propertyCollection:(id)arg3;
- (bool)isLowUtility;
- (id)medicalConceptByAddingCategoryType:(long long)arg1;
- (id)medicalConceptByReplacingCategoryTypes:(id)arg1;
- (id)medicalConceptByReplacingCategoryTypes:(id)arg1 codingCollection:(id)arg2 linkCollection:(id)arg3;
- (id)ontologyPreferredName;
- (id)preferredNameByLocaleIdentifier;
- (id)semanticIdentifier;
- (bool)unitTesting_isIdentical:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (void)applyCodableSubclassData:(id)arg1 mutableUserDomainConceptProperties:(id)arg2;
- (id)codableSubclassData;

@end
