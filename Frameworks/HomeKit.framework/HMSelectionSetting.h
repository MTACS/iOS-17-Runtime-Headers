
@interface HMSelectionSetting : HMSetting <HFStateDumpBuildable> {
    NSArray * _items;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *items;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (void).cxx_destruct;
- (id)internalValue;
- (bool)isKindOfClass:(Class)arg1;
- (id)items;
- (id)valueForUpdate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end
