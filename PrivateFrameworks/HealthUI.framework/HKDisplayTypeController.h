
@interface HKDisplayTypeController : NSObject <_HKWheelchairUseCharacteristicCacheObserver> {
    NSArray * _displayTypes;
    NSDictionary * _displayTypesByCategoryIdentifier;
    NSDictionary * _displayTypesByIdentifier;
    NSDictionary * _displayTypesByObjectType;
    _HKWheelchairUseCharacteristicCache * _wheelchairUseCharacteristicCache;
}

@property (nonatomic, readonly) _HKWheelchairUseCharacteristicCache *wheelchairUseCharacteristicCache;

+ (void)_computeSharedDisplayTypes;
+ (void)_unitTest_resetSharedDisplayTypes;
+ (id)controllers;
+ (struct os_unfair_lock_s { unsigned int x1; })controllersLock;
+ (id)displayTypeForObjectType:(id)arg1 wheelchairUse:(long long)arg2;
+ (void)initializeSharedDisplayTypes;
+ (id)sharedInstance;
+ (id)sharedInstanceForHealthStore:(id)arg1;

- (void).cxx_destruct;
- (id)_displayTypeWithUpdatedWheelchairUserIfNecessary:(id)arg1;
- (id)allDisplayTypes;
- (id)displayTypeForObjectType:(id)arg1;
- (id)displayTypeForObjectTypeUnifyingBloodPressureTypes:(id)arg1;
- (id)displayTypeWithIdentifier:(id)arg1;
- (id)displayTypesForCategoryIdentifier:(long long)arg1;
- (id)init;
- (id)initWithHealthStore:(id)arg1;
- (id)wheelchairUseCharacteristicCache;
- (void)wheelchairUseCharacteristicCache:(id)arg1 wheelchairUsageDidChange:(bool)arg2;

@end
