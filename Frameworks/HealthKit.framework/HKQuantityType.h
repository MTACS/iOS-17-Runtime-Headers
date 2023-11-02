
@interface HKQuantityType : HKSampleType <_HKStatisticsSampleTypeConfigurationProviding> {
    HKUnit * _canonicalUnit;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _canonicalUnitLock;
}

@property (readonly) long long aggregationStyle;
@property (nonatomic, readonly) HKUnit *canonicalUnit;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) _HKDimension *dimension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_quantityTypeWithCode:(long long)arg1;

- (void).cxx_destruct;
- (id)_initWithCode:(long long)arg1;
- (long long)aggregationStyle;
- (long long)aggregationStyleForStatistics;
- (id)canonicalUnit;
- (id)canonicalUnitForStatistics;
- (id)defaultUnitForLocale:(id)arg1 version:(long long)arg2;
- (id)dimension;
- (id)initWithIdentifier:(id)arg1;
- (bool)isCompatibleWithUnit:(id)arg1;
- (bool)supportsStatisticOptions:(unsigned long long)arg1;
- (id)underlyingSampleType;
- (void)validateUnit:(id)arg1;
- (void)validateUnitForStatistic:(id)arg1;
- (void)validateUnitFromString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)typeIdentifiersSupportingManualEntryValidation;

- (long long)associatedSampleAggregationStyle;
- (unsigned long long)validateQuantityForManualEntry:(id)arg1;

@end
