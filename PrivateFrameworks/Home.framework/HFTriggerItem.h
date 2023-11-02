
@interface HFTriggerItem : HFItem <HFHomeKitItemProtocol, HUTriggerLikeItem> {
    HMHome * _home;
    HFServiceActionItemProvider * _serviceActionItemProvider;
    HMTrigger * _trigger;
    bool  _usesRichIconDescriptors;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) HFServiceActionItemProvider *serviceActionItemProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HMTrigger *trigger;
@property (nonatomic) bool usesRichIconDescriptors;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)createRichIconDescriptors:(id)arg1 options:(id)arg2;
- (id)home;
- (id)homeKitObject;
- (id)init;
- (id)initWithHome:(id)arg1 trigger:(id)arg2;
- (id)serviceActionItemProvider;
- (void)setServiceActionItemProvider:(id)arg1;
- (void)setUsesRichIconDescriptors:(bool)arg1;
- (id)translateToRichIconDescriptors:(id)arg1 basedOnActionItems:(id)arg2;
- (id)trigger;
- (bool)usesRichIconDescriptors;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

- (id)identifier;

@end
