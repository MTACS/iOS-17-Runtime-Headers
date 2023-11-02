
@interface SBRecordingIndicatorSystemApertureElement : NSObject <SAElement, SAIndicatorBehavior, SAUIIndicatorElementViewProviding, SBSystemApertureElementVisibilityObserving, SBSystemApertureSuppressible> {
    NSString * _elementIdentifier;
    UIView * _indicatorView;
    SBRecordingIndicatorManager * _recordingIndicatorManager;
    bool  _suppressed;
}

@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SAElement> *element;
@property (nonatomic) <SAElementHosting> *elementHost;
@property (nonatomic, readonly, copy) NSString *elementIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *indicatorView;
@property (nonatomic) SBRecordingIndicatorManager *recordingIndicatorManager;
@property (readonly) Class superclass;
@property (getter=isSuppressed, nonatomic) bool suppressed;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)element;
- (void)element:(id)arg1 visibilityWillChange:(bool)arg2;
- (id)elementIdentifier;
- (bool)hasIndicatorBehavior;
- (id)indicatorView;
- (id)initWithRecordingIndicatorView:(id)arg1 recordingIndicatorManager:(id)arg2;
- (bool)isSuppressed;
- (id)recordingIndicatorManager;
- (void)setRecordingIndicatorManager:(id)arg1;
- (void)setSuppressed:(bool)arg1;
- (bool)shouldSuppressElementWhileOnCoversheet;
- (bool)shouldSuppressElementWhileOtherElementsPresent;
- (bool)shouldSuppressElementWhileOverLiquidDetectionCriticalU;
- (id)viewProvider;

@end
