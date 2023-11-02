
@interface CNContactSelectContainersAction : CNContactAction <CNContactContainerPickerViewControllerDelegate> {
    CNUIContainerContext * _containerContext;
    CNContactContainerPickerViewController * _containerPicker;
}

@property (nonatomic, retain) CNUIContainerContext *containerContext;
@property (nonatomic, retain) CNContactContainerPickerViewController *containerPicker;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cleanupForDismissal;
- (id)containerContext;
- (id)containerPicker;
- (void)containerPicker:(id)arg1 didFinishWithPickedContainers:(id)arg2;
- (bool)containerPicker:(id)arg1 shouldAllowDeselectionOfContainerWithIdentifier:(id)arg2;
- (void)performActionWithContainerContext:(id)arg1;
- (void)setContainerContext:(id)arg1;
- (void)setContainerPicker:(id)arg1;

@end
