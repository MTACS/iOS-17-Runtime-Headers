
@interface HKUserDomainConceptPropertyCollection : NSObject <NSCopying, NSFastEnumeration, NSSecureCoding> {
    NSArray * _properties;
}

@property (nonatomic, readonly, copy) NSArray *allBasicProperties;
@property (nonatomic, readonly, copy) NSArray *basicProperties;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly, copy) NSArray *properties;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)propertyCollectionByMergingCollection:(id)arg1 otherCollection:(id)arg2;
+ (id)propertyCollectionByMergingCollection:(id)arg1 otherCollection:(id)arg2 options:(unsigned long long)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_basicPropertiesIncludeDeleted:(bool)arg1;
- (id)_propertiesByType;
- (id)_propertiesWithType:(long long)arg1 includeDeleted:(bool)arg2;
- (id)allBasicProperties;
- (id)allPropertiesWithType:(long long)arg1;
- (id)basicProperties;
- (id)collectionByAddingProperties:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)firstBasicPropertyWithType:(long long)arg1;
- (id)firstPropertyWithType:(long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProperties:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)properties;
- (id)propertiesWithType:(long long)arg1;
- (id)propertyCollectionByMerging:(id)arg1 options:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/HealthMedications.framework/HealthMedications

+ (id)_userDomainConceptPropertyListWithFreeTextMedicationName:(id)arg1 freeTextFormCode:(long long)arg2 namedQuantities:(id)arg3;
+ (id)propertyCollectionWithUserSpecifiedName:(id)arg1 userSpecifiedNotes:(id)arg2 medicationVisualizationConfig:(id)arg3 freeTextProperties:(id)arg4;
+ (id)userDomainConceptPropertyListWithFreeTextMedicationName:(id)arg1 freeTextFormCode:(long long)arg2 freeTextStrengthQuantity:(id)arg3;

@end
