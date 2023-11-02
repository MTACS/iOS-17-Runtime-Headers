
@interface ICMediaActionMenu : NSObject {
    void completion;
    void isCameraAvailable;
    void isInSecureScreen;
    void isLiveTextAvailable;
    void isPasswordProtected;
    void presentingBarButtonItem;
    void presentingSourceView;
    void presentingViewController;
    void sidecarMenuController;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, readonly) bool hasSidecarMenuItems;
@property (nonatomic, readonly) bool isCameraAvailable;
@property (nonatomic, readonly) bool isInSecureScreen;
@property (nonatomic, readonly) bool isLiveTextAvailable;
@property (nonatomic, readonly) bool isPasswordProtected;
@property (nonatomic, retain) UIBarButtonItem *presentingBarButtonItem;
@property (nonatomic, readonly) UIView *presentingSourceView;
@property (nonatomic) UIViewController *presentingViewController;
@property (nonatomic) ICSidecarInsertMenuController *sidecarMenuController;

+ (id)menuWithIsCameraAvailable:(bool)arg1 isLiveTextAvailable:(bool)arg2 isPasswordProtected:(bool)arg3 isInSecureScreen:(bool)arg4 presentingViewController:(id)arg5 presentingBarButtonItem:(id)arg6 presentingSourceView:(id)arg7 deferredChildren:(bool)arg8 sidecarMenuController:(id)arg9 completion:(id /* block */)arg10;
+ (id)menuWithIsPasswordProtected:(bool)arg1 isInSecureScreen:(bool)arg2 presentingViewController:(id)arg3 presentingBarButtonItem:(id)arg4 presentingSourceView:(id)arg5 sidecarMenuController:(id)arg6 completion:(id /* block */)arg7;

- (void).cxx_destruct;
- (id /* block */)completion;
- (bool)hasSidecarMenuItems;
- (id)init;
- (id)initWithIsCameraAvailable:(bool)arg1 isLiveTextAvailable:(bool)arg2 isPasswordProtected:(bool)arg3 isInSecureScreen:(bool)arg4 presentingViewController:(id)arg5 presentingBarButtonItem:(id)arg6 presentingSourceView:(id)arg7 sidecarMenuController:(id)arg8 completion:(id /* block */)arg9;
- (id)initWithIsPasswordProtected:(bool)arg1 isInSecureScreen:(bool)arg2 presentingViewController:(id)arg3 presentingBarButtonItem:(id)arg4 presentingSourceView:(id)arg5 sidecarMenuController:(id)arg6 completion:(id /* block */)arg7;
- (bool)isCameraAvailable;
- (bool)isInSecureScreen;
- (bool)isLiveTextAvailable;
- (bool)isPasswordProtected;
- (id)makeMenu;
- (id)menuSections;
- (id)presentingBarButtonItem;
- (id)presentingSourceView;
- (id)presentingViewController;
- (void)setCompletion:(id /* block */)arg1;
- (void)setPresentingBarButtonItem:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setSidecarMenuController:(id)arg1;
- (id)sidecarMenuController;
- (void)willShowMenu;

@end
