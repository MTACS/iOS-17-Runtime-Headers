
@interface PXCMMTranscriptBubbleViewController : PXTranscriptBubbleViewController <PXChangeObserver, PXPhotoLibraryUIChangeObserver> {
    PHFetchResult * _backingFetchResult;
    long long  _bubbleState;
    NSError * _error;
    PXCMMTranscriptBubbleStatusView * _errorStatusView;
    bool  _isExpungingAndRefetching;
    bool  _isSender;
    PXCMMTranscriptBubbleStatusView * _loadingStatusView;
    PHPhotoLibrary * _photoLibrary;
    bool  _readyForBubbleStateTransitions;
    PXCMMSpecManager * _specManager;
    PXCMMStackBubbleView * _stackBubbleView;
    long long  _targetState;
    <PXCMMTranscriptBubbleTouchDelegate> * _touchDelegate;
    bool  _triggeredForcedSync;
    NSURL * _url;
}

@property (nonatomic) long long bubbleState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSender;
@property (nonatomic, readonly) PHMomentShare *momentShare;
@property (readonly) Class superclass;
@property (nonatomic) long long targetState;
@property (nonatomic) <PXCMMTranscriptBubbleTouchDelegate> *touchDelegate;
@property (nonatomic, readonly) NSURL *url;

+ (bool)_isPermanentFailureURL:(id)arg1;
+ (void)_registerPermanentFailureURL:(id)arg1;

- (void).cxx_destruct;
- (void)_acceptMomentShareIfNeeded:(id)arg1;
- (void)_autoAcceptMomentShareIfNeeded:(id)arg1;
- (void)_ensureBubbleStateTransition;
- (void)_fetchMomentShareFromNetworkURL:(id)arg1;
- (void)_momentShareURL:(id)arg1 fetchDidFailWithError:(id)arg2;
- (void)_readyForStateTransition;
- (void)_retryMomentShareFetch;
- (bool)_shouldNavigateToContent;
- (bool)_shouldOpenCloudSettings;
- (bool)_shouldOpenInSafari;
- (bool)_shouldRetryOnTap;
- (bool)_shouldShowContent;
- (void)_tapGesture:(id)arg1;
- (void)_triggerForcedSyncIfNeeded;
- (void)_updateBubbleState;
- (void)_updateBubbleView;
- (void)_updateContent;
- (long long)bubbleState;
- (struct CGSize { double x1; double x2; })contentSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)dealloc;
- (id)description;
- (id)error;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithURL:(id)arg1 isSender:(bool)arg2;
- (bool)isSender;
- (id)momentShare;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)setBubbleState:(long long)arg1;
- (void)setError:(id)arg1;
- (void)setTargetState:(long long)arg1;
- (void)setTouchDelegate:(id)arg1;
- (long long)targetState;
- (id)touchDelegate;
- (id)url;
- (void)viewDidLoad;
- (struct CGSize { double x1; double x2; })workaroundSizeForSize:(struct CGSize { double x1; double x2; })arg1;

@end
