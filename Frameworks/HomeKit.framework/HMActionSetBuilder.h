
@interface HMActionSetBuilder : HMActionSet <HFIncludedContextProtocol, HMActionSetBuilder, HMActionSetBuilderInternal, HMActionSetBuilderPrivate>

@property (nonatomic, readonly, copy) NSString *actionSetType;
@property (nonatomic, copy) NSSet *actions;
@property (nonatomic, readonly) HMApplicationData *applicationData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)alloc;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (void)hf_setValue:(bool)arg1 forContextType:(unsigned long long)arg2;

@end
