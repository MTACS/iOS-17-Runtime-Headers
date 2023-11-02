
@interface HUItemModuleController : NSObject <HUItemTextEditingController> {
    <HUItemModuleControllerHosting> * _host;
    unsigned long long  _hostType;
    HFItemModule * _module;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <HUItemModuleControllerHosting> *host;
@property (nonatomic) unsigned long long hostType;
@property (nonatomic, readonly) HFItemModule *module;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)accessoryButtonTappedForItem:(id)arg1;
- (id)asGeneric;
- (bool)canSelectDisabledItem:(id)arg1;
- (bool)canSelectItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (Class)collectionCellClassForItem:(id)arg1;
- (id)collectionLayoutSectionForSectionWithIdentifier:(id)arg1 layoutEnvironment:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (id)currentTextForTextField:(id)arg1 item:(id)arg2;
- (id)defaultTextForTextField:(id)arg1 item:(id)arg2;
- (unsigned long long)didSelectItem:(id)arg1;
- (id)host;
- (unsigned long long)hostType;
- (id)initWithModule:(id)arg1;
- (id)leadingSwipeActionsForItem:(id)arg1;
- (id)module;
- (id)placeholderTextForTextField:(id)arg1 item:(id)arg2;
- (long long)rowAnimationForOperationType:(unsigned long long)arg1 item:(id)arg2 suggestedAnimation:(long long)arg3;
- (void)setHost:(id)arg1;
- (void)setHostType:(unsigned long long)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (bool)shouldHideFooterBelowSectionWithIdentifier:(id)arg1;
- (bool)shouldHideHeaderAboveSectionWithIdentifier:(id)arg1;
- (bool)shouldManageTextFieldForItem:(id)arg1;
- (void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1 item:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1 item:(id)arg2;
- (id)textFieldForVisibleItem:(id)arg1;
- (id)trailingSwipeActionsForItem:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(bool)arg3;

@end
