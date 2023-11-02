
@interface _UIShareServiceActivityProxy : NSObject {
    long long  _activityCategory;
    NSString * _activityType;
    NSUUID * _activityUUID;
    id /* block */  _didFinishPerformingActivityHandler;
    id /* block */  _didFinishPreparingForExecution;
    Class  _remoteClass;
    NSURL * _representationCacheURL;
    struct CGSize { 
        double width; 
        double height; 
    }  _thumbnailSize;
    UISUIActivityExtensionItemDataRequest * _underlyingActivityItemDataRequest;
}

@property (nonatomic, copy) id /* block */ didFinishPerformingActivityHandler;
@property (nonatomic, copy) id /* block */ didFinishPreparingForExecution;

+ (id)activityProxyForServiceActivityDataRequest:(id)arg1;
+ (void)forwardInvocation:(id)arg1;

- (void).cxx_destruct;
- (bool)_activitySupportsPromiseURLs;
- (bool)_allowsAutoCancelOnDismiss;
- (void)_cleanup;
- (bool)_dismissActivityFromViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)_embeddedActivityViewController;
- (bool)_isExecutedInProcess;
- (void)_loadItemProvidersFromActivityItems:(id)arg1 completion:(id /* block */)arg2;
- (bool)_managesOwnPresentation;
- (bool)_needsResolvedActivityItems;
- (void)_prepareWithActivityItems:(id)arg1 completion:(id /* block */)arg2;
- (bool)_presentActivityOnViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (struct CGSize { double x1; double x2; })_thumbnailSize;
- (bool)_wantsAttachmentURLItemData;
- (bool)_wantsInitialSocialText;
- (bool)_wantsThumbnailItemData;
- (void)_willBePerformedOrPresented;
- (void)activityDidFinish:(bool)arg1;
- (void)activityDidFinish:(bool)arg1 items:(id)arg2 error:(id)arg3;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)activityUUID;
- (id)activityViewController;
- (bool)allowsEmbedding;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id /* block */)didFinishPerformingActivityHandler;
- (id /* block */)didFinishPreparingForExecution;
- (void)forwardInvocation:(id)arg1;
- (id)initWithUnderlyingActivityItemDataRequest:(id)arg1;
- (bool)isKindOfClass:(Class)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setDidFinishPerformingActivityHandler:(id /* block */)arg1;
- (void)setDidFinishPreparingForExecution:(id /* block */)arg1;

@end