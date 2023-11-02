
@interface NotesEditor.SidecarInsertProgressViewController : UIViewController <UIAdaptivePresentationControllerDelegate> {
    void $__lazy_storage_$_cancelButton;
    void $__lazy_storage_$_deviceImageView;
    void $__lazy_storage_$_dividerView;
    void $__lazy_storage_$_progressTitleLabel;
    void $__lazy_storage_$_stackView;
    void device;
    void didTapCancel;
    void isUpdatingPreferredContentSize;
    void service;
}

- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)cancelButtonDidTouchUpInsideButton:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
