
@interface HMDataSetting : HMSetting <HFStateDumpBuildable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (id)internalValue;
- (bool)isKindOfClass:(Class)arg1;
- (id)valueForUpdate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_debugValueForData:(unsigned long long*)arg1;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end
