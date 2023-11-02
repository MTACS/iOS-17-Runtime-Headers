
@interface SKOverlay : NSObject <ASOOverlay, ASOOverlayDelegate> {
    SKOverlayConfiguration * _configuration;
    <SKOverlayDelegate> * _delegate;
}

@property (readonly, copy) SKOverlayConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKOverlayDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) <ASOOverlayConfiguration> *overlayConfiguration;
@property (nonatomic, readonly) <ASOOverlayDelegate> *overlayDelegate;
@property (readonly) Class superclass;

+ (void)dismissOverlayInScene:(id)arg1;
+ (id)unsupportedPlatformErrorWithAPIName:(id)arg1;

- (void).cxx_destruct;
- (id)configuration;
- (id)delegate;
- (id)initWithConfiguration:(id)arg1;
- (bool)isReadyToPresentInScene:(id)arg1;
- (id)overlayConfiguration;
- (id)overlayDelegate;
- (void)presentInScene:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)storeOverlay:(id)arg1 didFailToLoadWithError:(id)arg2;
- (void)storeOverlay:(id)arg1 didFinishDismissal:(id)arg2;
- (void)storeOverlay:(id)arg1 didFinishPresentation:(id)arg2;
- (void)storeOverlay:(id)arg1 willStartDismissal:(id)arg2;
- (void)storeOverlay:(id)arg1 willStartPresentation:(id)arg2;
- (id)tranformToPublicError:(id)arg1;

@end
