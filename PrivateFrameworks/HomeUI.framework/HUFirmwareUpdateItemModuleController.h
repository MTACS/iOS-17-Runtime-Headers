
@interface HUFirmwareUpdateItemModuleController : HUItemModuleController <HULockupViewDelegate> {
    <HUExpandableTextViewCellDelegate> * _expandableTextViewCellDelegate;
    NSMapTable * _expandedStateByItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <HUExpandableTextViewCellDelegate> *expandableTextViewCellDelegate;
@property (nonatomic, readonly) NSMapTable *expandedStateByItems;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HUFirmwareUpdateItemModule *module;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)canSelectItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (id)expandableTextViewCellDelegate;
- (id)expandedStateByItems;
- (id)initWithModule:(id)arg1 expandableTextViewCellDelegate:(id)arg2;
- (void)lockupView:(id)arg1 downloadControlTapped:(id)arg2;
- (void)lockupView:(id)arg1 expandableTextViewDidExpand:(id)arg2;
- (void)setExpandableTextViewCellDelegate:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(bool)arg3;

@end
