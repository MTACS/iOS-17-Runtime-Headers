
@interface VideosExtrasContext : NSObject <VideosExtrasPlaybackDelegate, VideosExtrasRootViewControllerDelegate> {
    NSString * _buyParameters;
    <VideosExtrasContextDelegate> * _delegate;
    VideosExtrasRootViewController * _extrasRootViewController;
    MPPlaybackContext * _featurePlaybackContext;
    UIViewController * _featurePlaybackViewController;
    bool  _isStarted;
    NSURL * _javascriptURL;
    MPMediaItem * _mediaItem;
    unsigned long long  _selectedMainMenuIndex;
    long long  _storeID;
    NSObject<TVPMediaItem> * _tvpMediaItem;
}

@property (nonatomic, readonly, copy) NSString *buyParameters;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VideosExtrasContextDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) VideosExtrasRootViewController *extrasRootViewController;
@property (nonatomic, retain) MPPlaybackContext *featurePlaybackContext;
@property (nonatomic, retain) UIViewController *featurePlaybackViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isStarted;
@property (nonatomic, readonly, copy) NSURL *javascriptURL;
@property (nonatomic, readonly) NSArray *mainMenuItemElements;
@property (nonatomic, readonly) MPMediaItem *mediaItem;
@property (nonatomic) unsigned long long selectedMainMenuIndex;
@property (nonatomic) bool showsBuiltInNavigationControls;
@property (nonatomic) bool showsMenuBar;
@property (nonatomic, readonly) long long storeID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<TVPMediaItem> *tvpMediaItem;

+ (Class)extrasRootViewControllerClass;
+ (id)overriddenJavascriptURL;
+ (void)overrideJavascriptURL:(id)arg1;

- (void).cxx_destruct;
- (void)_configureForMediaItem:(id)arg1;
- (id)buyParameters;
- (void)clearNavStack;
- (id)delegate;
- (void)extrasBackButtonPressed;
- (void)extrasDoneButtonPressed;
- (void)extrasMenuItemSelected:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)extrasRequestReloadWithContext:(id)arg1;
- (void)extrasRequestsMediaPlayback:(id)arg1 isBackground:(bool)arg2;
- (void)extrasRequestsPlaybackStop;
- (id)extrasRootViewController;
- (void)extrasRootViewController:(id)arg1 extrasVisibilityNeedsUpdate:(bool)arg2;
- (void)extrasRootViewControllerDidLoadMainMenuItems:(id)arg1;
- (void)failWithError:(id)arg1;
- (id)featurePlaybackContext;
- (id)featurePlaybackViewController;
- (id)init;
- (id)initWithApplicationJavascriptURL:(id)arg1 storeID:(long long)arg2 buyParameters:(id)arg3;
- (id)initWithMediaItem:(id)arg1;
- (id)initWithTVPMediaItem:(id)arg1;
- (bool)isMenuItemElementMainFeature:(id)arg1;
- (bool)isStarted;
- (id)javascriptURL;
- (id)mainMenuItemElements;
- (id)mediaItem;
- (unsigned long long)selectedMainMenuIndex;
- (void)setClearsStackOnNextPush;
- (void)setDelegate:(id)arg1;
- (void)setFeaturePlaybackContext:(id)arg1;
- (void)setFeaturePlaybackViewController:(id)arg1;
- (void)setIsStarted:(bool)arg1;
- (void)setSelectedMainMenuIndex:(unsigned long long)arg1;
- (void)setShowsBuiltInNavigationControls:(bool)arg1;
- (void)setShowsMenuBar:(bool)arg1;
- (bool)shouldExtrasBeVisibleForSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)showsBuiltInNavigationControls;
- (bool)showsMenuBar;
- (void)startIfNecessary;
- (long long)storeID;
- (id)tvpMediaItem;

@end