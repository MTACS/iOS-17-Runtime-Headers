
@interface ActivityPickerRemoteViewController : _UIRemoteViewController <FamilyControls.ActivityPickerClientInterface> {
    void didCancelCallback;
    void didSelectCallback;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)didCancel;
- (void)didSelectWithApplications:(id)arg1 categories:(id)arg2 webDomains:(id)arg3 untokenizedApplications:(id)arg4 untokenizedCategories:(id)arg5 untokenizedWebDomains:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
