
@interface ConversationKit.ConversationNoticeViewController : UIViewController {
    void $__lazy_storage_$_systemApertureLeadingAccessoryTapGesture;
    void controlsManager;
    void delegate;
    void expanded;
    void isSystemAperturePresentation;
    void menuPresented;
    void noticeView;
    void presentationSize;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  recipe;
}

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)handleSystemApertureTapGesture;
- (void)handleTapGesture;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
