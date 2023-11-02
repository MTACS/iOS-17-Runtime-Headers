
@interface HUTriggerConditionEditorItemModuleController : HUItemModuleController <HUSwitchCellDelegate, HUTriggerTimeConditionDetailEditorDelegate> {
    <HUTriggerConditionEditorItemModuleControllerDelegate> * _delegate;
    HUTriggerConditionDetailEditingContext * _detailEditingContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HUTriggerConditionEditorItemModuleControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HUTriggerConditionDetailEditingContext *detailEditingContext;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HUTriggerConditionEditorItemModule *module;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canEditConditionOptionItem:(id)arg1;
- (void)_dismissDetailEditor:(id)arg1;
- (void)_presentDetailEditorForConditionOptionItem:(id)arg1;
- (void)accessoryButtonTappedForItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (id)delegate;
- (id)detailEditingContext;
- (unsigned long long)didSelectItem:(id)arg1;
- (id)initWithModule:(id)arg1 delegate:(id)arg2;
- (void)setDetailEditingContext:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (void)switchCell:(id)arg1 didTurnOn:(bool)arg2;
- (void)timeConditionEditor:(id)arg1 didFinishWithCondition:(id)arg2;
- (void)timeConditionEditorDidCancel:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(bool)arg3;

@end
