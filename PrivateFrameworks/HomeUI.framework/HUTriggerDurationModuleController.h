
@interface HUTriggerDurationModuleController : HUItemModuleController <HUTriggerDurationPickerDelegate> {
    <HUTriggerDurationModuleControllerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUTriggerDurationModuleControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_durationEventBuilder;
- (Class)cellClassForItem:(id)arg1;
- (id)delegate;
- (unsigned long long)didSelectItem:(id)arg1;
- (void)durationPicker:(id)arg1 didSelectDuration:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(bool)arg3;

@end
