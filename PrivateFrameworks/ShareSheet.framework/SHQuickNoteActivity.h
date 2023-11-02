
@interface SHQuickNoteActivity : UIActivity <ICSystemPaperPresentationDelegate> {
    bool  __hasSupportedShareableItems;
    bool  __hasUserActivityCurrent;
    NSArray * __imageFileURLs;
    NSArray * __images;
    NSArray * __urls;
    _Atomic bool  _canOpenFromManagedToUnmanaged;
    _Atomic bool  _isQuickNoteExtensionInstalled;
    NSObject<OS_dispatch_queue> * _queryQueue;
    UIViewController<ICSystemPaperExtensionHostViewController> * _systemPaperViewController;
}

@property (nonatomic) bool _hasSupportedShareableItems;
@property (nonatomic) bool _hasUserActivityCurrent;
@property (nonatomic, copy) NSArray *_imageFileURLs;
@property (nonatomic, copy) NSArray *_images;
@property (nonatomic, copy) NSArray *_urls;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isQuickNoteExtensionInstalled;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIViewController<ICSystemPaperExtensionHostViewController> *systemPaperViewController;

+ (unsigned long long)_xpcAttributes;
+ (long long)activityCategory;

- (void).cxx_destruct;
- (void)_configureQuickNotePresentationDelegateWithPresenterViewController:(id)arg1;
- (bool)_dismissActivityFromViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (bool)_hasSupportedShareableItems;
- (bool)_hasUserActivityCurrent;
- (id)_imageFileURLs;
- (id)_images;
- (bool)_managesOwnPresentation;
- (bool)_presentActivityOnViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)_systemImageName;
- (id)_urls;
- (id)activityTitle;
- (id)activityType;
- (bool)canOpenFromManagedToUnmanaged;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)init;
- (bool)isQuickNoteExtensionInstalled;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setSystemPaperViewController:(id)arg1;
- (void)set_hasSupportedShareableItems:(bool)arg1;
- (void)set_hasUserActivityCurrent:(bool)arg1;
- (void)set_imageFileURLs:(id)arg1;
- (void)set_images:(id)arg1;
- (void)set_urls:(id)arg1;
- (void)systemPaperDidFinishWithError:(id)arg1;
- (id)systemPaperViewController;

@end
