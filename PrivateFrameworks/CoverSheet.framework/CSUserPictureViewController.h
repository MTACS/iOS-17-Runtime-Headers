
@interface CSUserPictureViewController : CSCoverSheetViewControllerBase <CSEventHandling> {
    UMUser * _user;
    CSUserPictureView * _userPictureView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)isUserPictureSupported;
+ (Class)viewClass;

- (void).cxx_destruct;
- (void)aggregateAppearance:(id)arg1;
- (bool)handleEvent:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)presentationPriority;
- (long long)presentationStyle;
- (long long)presentationType;
- (id)view;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
