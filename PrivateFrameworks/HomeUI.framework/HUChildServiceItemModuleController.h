
@interface HUChildServiceItemModuleController : HUItemModuleController <HUEditableCheckmarkDelegate> {
    HFItemBuilder<HFServiceLikeBuilder> * _activelyEditingNameServiceBuilder;
    bool  _allConfigurationDisabled;
    HUChildServiceEditorItemModule * _childServiceItemModule;
    <HUChildServiceModuleControllerDelegate> * _delegate;
    NSMapTable * _identifyButtonMap;
}

@property (nonatomic, retain) HFItemBuilder<HFServiceLikeBuilder> *activelyEditingNameServiceBuilder;
@property (nonatomic, readonly) bool allConfigurationDisabled;
@property (nonatomic, retain) HUChildServiceEditorItemModule *childServiceItemModule;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUChildServiceModuleControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMapTable *identifyButtonMap;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_identifyButtonPressed:(id)arg1 forEvent:(id)arg2;
- (id)activelyEditingNameServiceBuilder;
- (bool)allConfigurationDisabled;
- (bool)canSelectDisabledItem:(id)arg1;
- (bool)canSelectItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (void)checkmarkTappedInCell:(id)arg1 forItem:(id)arg2;
- (id)childServiceItemModule;
- (id)defaultTextForTextField:(id)arg1 item:(id)arg2;
- (id)delegate;
- (unsigned long long)didSelectItem:(id)arg1;
- (id)identifyButtonMap;
- (id)initWithModule:(id)arg1;
- (id)initWithModule:(id)arg1 delegate:(id)arg2;
- (id)placeholderTextForTextField:(id)arg1 item:(id)arg2;
- (void)setActivelyEditingNameServiceBuilder:(id)arg1;
- (void)setChildServiceItemModule:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIdentifyButtonMap:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (bool)shouldManageTextFieldForItem:(id)arg1;
- (void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1 item:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1 item:(id)arg2;
- (void)updateAllConfigurationDisabled;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(bool)arg3;

@end
