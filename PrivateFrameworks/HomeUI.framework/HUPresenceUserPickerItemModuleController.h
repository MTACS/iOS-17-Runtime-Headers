
@interface HUPresenceUserPickerItemModuleController : HUItemModuleController <UITextViewDelegate> {
    <HUPresenceUserPickerItemModuleControllerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUPresenceUserPickerItemModuleControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_showAlertForConfirmationPrompt:(id)arg1;
- (void)accessoryButtonTappedForItem:(id)arg1;
- (bool)canSelectDisabledItem:(id)arg1;
- (bool)canSelectItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (id)delegate;
- (unsigned long long)didSelectItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(bool)arg3;

@end
