
@interface HMAccessoryNumberSetting : HMAccessorySetting <HFStateDumpBuildable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSNumber *maximumValue;
@property (readonly) NSNumber *minimumValue;
@property (readonly) NSNumber *stepValue;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (id)initWithKey:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3;
- (id)initWithKey:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3 minimumValue:(id)arg4 maximumValue:(id)arg5 stepValue:(id)arg6;
- (id)maximumValue;
- (id)minimumValue;
- (id)stepValue;
- (void)updateValue:(id)arg1;
- (Class)valueClass;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (bool)hf_isBooleanSetting;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end
