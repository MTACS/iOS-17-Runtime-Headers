
@interface HUSoftwareUpdateItemModuleController : HUItemModuleController <HULockupViewDelegate, HUSoftwareUpdateUIPresentationDelegate> {
    <HUSoftwareUpdateItemModuleControllerDelegate> * _delegate;
    <HUExpandableTextViewCellDelegate> * _expandableTextViewCellDelegate;
    NSMapTable * _expandedStateByItems;
    NSMapTable * _serviceGridViewControllersByItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HUSoftwareUpdateItemModuleControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <HUExpandableTextViewCellDelegate> *expandableTextViewCellDelegate;
@property (nonatomic, readonly) NSMapTable *expandedStateByItems;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HUSoftwareUpdateItemModule *module;
@property (nonatomic, readonly) NSMapTable *serviceGridViewControllersByItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_startUpdateOnAccessories:(id)arg1;
- (bool)canSelectItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (id)delegate;
- (id)expandableTextViewCellDelegate;
- (id)expandedStateByItems;
- (id)initWithModule:(id)arg1;
- (id)initWithModule:(id)arg1 delegate:(id)arg2 expandableTextViewCellDelegate:(id)arg3;
- (void)lockupView:(id)arg1 downloadControlTapped:(id)arg2;
- (void)lockupView:(id)arg1 expandableTextViewDidExpand:(id)arg2;
- (id)serviceGridViewControllersByItems;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (id)softwareUpdateUIManager:(id)arg1 dismissViewController:(id)arg2;
- (id)softwareUpdateUIManager:(id)arg1 presentViewController:(id)arg2;
- (void)updateAllAccessories;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(bool)arg3;

@end
