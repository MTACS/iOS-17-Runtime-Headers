
@interface HMNumberSetting : HMSetting <HFStateDumpBuildable> {
    NSNumber * _maximumValue;
    NSNumber * _minimumValue;
    NSNumber * _stepValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSNumber *maximumValue;
@property (readonly) NSNumber *minimumValue;
@property (readonly) NSNumber *stepValue;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 type:(long long)arg3 value:(id)arg4 properties:(unsigned long long)arg5 minimumValue:(id)arg6 maximumValue:(id)arg7 stepValue:(id)arg8;
- (id)internalValue;
- (bool)isKindOfClass:(Class)arg1;
- (id)maximumValue;
- (id)minimumValue;
- (id)stepValue;
- (id)valueForUpdate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end
