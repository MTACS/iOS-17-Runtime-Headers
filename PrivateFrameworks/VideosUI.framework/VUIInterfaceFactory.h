
@interface VUIInterfaceFactory : NSObject {
    NSObject<VUIDocumentCreator> * _documentCreator;
    struct { 
        bool respondsToViewControllerCreation; 
    }  _documentCreatorFlags;
    NSObject<VUIGroupActivitiesManagerDelegate> * _groupActivitiesManager;
    NSObject<VUILanguageAwareStringHandling> * _languageStringHandler;
    NSObject<VUIOpenURLHandling> * _openURLHandler;
    UIViewController * _rootPresentingViewController;
    NSObject<VUITabBarProtocol> * _tabBarController;
    NSObject<VUIControllerPresenter> * _welcomeScreenControllerPresenter;
}

@property (nonatomic, retain) NSObject<VUIControllerPresenter> *controllerPresenter;
@property (nonatomic, retain) NSObject<VUIDocumentCreator> *documentCreator;
@property (nonatomic, retain) NSObject<VUIGroupActivitiesManagerDelegate> *groupActivitiesManager;
@property (nonatomic, retain) NSObject<VUILanguageAwareStringHandling> *languageStringHandler;
@property (nonatomic, retain) NSObject<VUIOpenURLHandling> *openURLHandler;
@property (nonatomic, retain) UIViewController *rootPresentingViewController;
@property (nonatomic, retain) NSObject<VUITabBarProtocol> *tabBarController;
@property (nonatomic, retain) NSObject<VUIControllerPresenter> *welcomeScreenControllerPresenter;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)accountViewController;
- (id)controllerPresenter;
- (id)documentCreator;
- (id)groupActivitiesManager;
- (id)languageStringHandler;
- (id)openURLHandler;
- (id)rootPresentingViewController;
- (id)rootSplitViewController;
- (void)setControllerPresenter:(id)arg1;
- (void)setDocumentCreator:(id)arg1;
- (void)setGroupActivitiesManager:(id)arg1;
- (void)setLanguageStringHandler:(id)arg1;
- (void)setOpenURLHandler:(id)arg1;
- (void)setRootPresentingViewController:(id)arg1;
- (void)setTabBarController:(id)arg1;
- (void)setWelcomeScreenControllerPresenter:(id)arg1;
- (id)tabBarController;
- (id)viewControllerWithDocumentDataSource:(id)arg1 appContext:(id)arg2;
- (id)viewControllerWithDocumentDataSource:(id)arg1 appContext:(id)arg2 documentOptions:(id)arg3;
- (id)welcomeScreenControllerPresenter;

@end
