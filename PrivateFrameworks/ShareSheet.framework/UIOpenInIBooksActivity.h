
@interface UIOpenInIBooksActivity : UIActivity <LSOpenResourceOperationDelegate, UIManagedConfigurationRestrictableActivity> {
    NSString * _applicationIdentifier;
    LSApplicationProxy * _applicationProxy;
    bool  _isContentManaged;
    NSOperation * _operation;
    UIPrintInteractionController * _printInteractionController;
    bool  _shouldUnlinkFile;
    NSString * _sourceApplicationBundleID;
    NSURL * _url;
}

@property (nonatomic, retain) NSString *applicationIdentifier;
@property (nonatomic, retain) LSApplicationProxy *applicationProxy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isContentManaged;
@property (nonatomic, retain) NSOperation *operation;
@property (nonatomic, retain) UIPrintInteractionController *printInteractionController;
@property (nonatomic) bool shouldUnlinkFile;
@property (nonatomic, copy) NSString *sourceApplicationBundleID;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURL *url;

+ (unsigned long long)_xpcAttributes;
+ (long long)activityCategory;
+ (id)bestJobNameForActivityItems:(id)arg1;
+ (id)defaultJobName;
+ (id)jobNameFormatForFile;

- (void).cxx_destruct;
- (bool)_appIsDocumentTypeOwner;
- (id)_bundleIdentifierForActivityImageCreation;
- (long long)_defaultSortGroup;
- (void)_finishedCopyingResource:(bool)arg1;
- (void)_handleSaveToPDFWithCompleted:(bool)arg1 error:(id)arg2;
- (id)_loadedApplicationProxy;
- (void)_openDocumentWithApplication;
- (id)activityTitle;
- (id)activityType;
- (id)applicationIdentifier;
- (id)applicationProxy;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)init;
- (bool)isContentManaged;
- (void)openResourceOperation:(id)arg1 didFailWithError:(id)arg2;
- (void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2;
- (void)openResourceOperationDidComplete:(id)arg1;
- (id)operation;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (id)printInteractionController;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setApplicationProxy:(id)arg1;
- (void)setIsContentManaged:(bool)arg1;
- (void)setOperation:(id)arg1;
- (void)setPrintInteractionController:(id)arg1;
- (void)setShouldUnlinkFile:(bool)arg1;
- (void)setSourceApplicationBundleID:(id)arg1;
- (void)setUrl:(id)arg1;
- (bool)shouldUnlinkFile;
- (id)sourceApplicationBundleID;
- (id)url;

@end
