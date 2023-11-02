
@interface HKInspectableValueCollection : NSObject <HKCodedObject, NSCopying, NSSecureCoding> {
    NSArray * _collection;
    long long  _collectionType;
    NSArray * _elementTags;
}

@property (nonatomic, readonly) NSArray *collection;
@property (nonatomic, readonly) long long collectionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *elementTags;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKInspectableValue *inspectableValue;
@property (nonatomic, readonly) NSArray *inspectableValues;
@property (nonatomic, readonly) HKInspectableValue *max;
@property (nonatomic, readonly) HKInspectableValue *min;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *unitString;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_unitStringForValue:(id)arg1;
+ (id)_unitStringForValueCollection:(id)arg1;
+ (bool)hasNoValue:(id)arg1;
+ (id)indexableKeyPathsWithPrefix:(id)arg1;
+ (id)inspectableValueCollectionListWithValues:(id)arg1;
+ (id)inspectableValueCollectionRangeWithMax:(id)arg1;
+ (id)inspectableValueCollectionRangeWithMin:(id)arg1;
+ (id)inspectableValueCollectionRangeWithMin:(id)arg1 max:(id)arg2;
+ (id)inspectableValueCollectionSingleWithValue:(id)arg1;
+ (id)inspectableValueCollectionTaggedListWithValues:(id)arg1 tags:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_assertCollectionType;
- (id)_initWithCollectionType:(long long)arg1 collection:(id)arg2;
- (id)_initWithCollectionType:(long long)arg1 collection:(id)arg2 tags:(id)arg3;
- (bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
- (id)codingsForKeyPath:(id)arg1 error:(id*)arg2;
- (id)collection;
- (long long)collectionType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)elementTags;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)inspectableValue;
- (id)inspectableValues;
- (bool)isEqual:(id)arg1;
- (id)max;
- (id)min;
- (long long)referenceRangeStatusWithRanges:(id)arg1;
- (id)unitString;
- (id)valueInRangeWithReferenceRanges:(id)arg1 includeUnitString:(bool)arg2;
- (id)valueInRangeWithReferenceRanges:(id)arg1 includeUnitString:(bool)arg2 allowsNullRange:(bool)arg3;
- (id)valuesWithTag:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (void)parseUncodedValueCollection:(id)arg1 referenceRanges:(id)arg2 withCompletion:(id /* block */)arg3;
+ (void)parseValueCollection:(id)arg1 referenceRanges:(id)arg2 healthRecordsStore:(id)arg3 withCompletion:(id /* block */)arg4;

- (id)_joinValueStrings:(id)arg1;
- (id)_stringsForValues:(id)arg1;
- (id)displayString;

@end
