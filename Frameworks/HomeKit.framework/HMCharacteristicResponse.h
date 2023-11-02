
@interface HMCharacteristicResponse : HMResponseBase <HFStateDumpBuildable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMCharacteristicRequest *request;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (id)initWithRequest:(id)arg1 error:(id)arg2;
- (id)initWithRequest:(id)arg1 value:(id)arg2 error:(id)arg3;
- (bool)isEqual:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end
