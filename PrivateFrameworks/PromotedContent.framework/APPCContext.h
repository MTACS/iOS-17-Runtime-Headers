
@interface APPCContext : APPCBaseContext <APPCMetricRegister, APPCPromotableContext, APPCPromotableUIContext> {
    void appStoreContext;
    void contextQueue;
    void denylistEvaluator;
    void fetching;
    void fetchingLock;
    void inventory;
    void inventoryLock;
    void lastError;
    void limit;
    void newContentArrivedHandlers;
    void newsContext;
    void placeholders;
    void placeholdersLock;
    void prefetchLock;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  prefetchTimestamp;
    void requester;
    void waiting;
    void waitingLock;
}

@property (nonatomic, readonly) long long hash;
@property (nonatomic, copy) NSDate *prefetchTimestamp;

// Image: /System/Library/PrivateFrameworks/PromotedContent.framework/PromotedContent

- (void).cxx_destruct;
- (void)dealloc;
- (long long)hash;
- (id)initWithMaxSize:(struct CGSize { double x1; double x2; })arg1 requestedAd:(id)arg2 current:(id)arg3 adjacent:(id)arg4;
- (id)initWithMaxSize:(struct CGSize { double x1; double x2; })arg1 requestedAd:(id)arg2 current:(id)arg3 adjacent:(id)arg4 newsContext:(id)arg5;
- (id)initWithMaxSize:(struct CGSize { double x1; double x2; })arg1 requestedAd:(id)arg2 current:(id)arg3 next:(id)arg4;
- (id)initWithMaxSize:(struct CGSize { double x1; double x2; })arg1 requestedAd:(id)arg2 current:(id)arg3 next:(id)arg4 newsContext:(id)arg5;
- (void)nativePromotedContentWithSize:(struct CGSize { double x1; double x2; })arg1 contentFetched:(id /* block */)arg2;
- (void)prefetchPromotedContentWithRequests:(id)arg1;
- (id)prefetchTimestamp;
- (id)promotedContentInterstitialWithSize:(struct CGSize { double x1; double x2; })arg1 ready:(id /* block */)arg2;
- (void)promotedContentNativeWithSize:(struct CGSize { double x1; double x2; })arg1 contentFetched:(id /* block */)arg2;
- (id)promotedContentVideoWithSize:(struct CGSize { double x1; double x2; })arg1 placeholderReplacement:(id /* block */)arg2;
- (id)promotedContentWithType:(long long)arg1 size:(struct CGSize { double x1; double x2; })arg2 placeholderReplacement:(id /* block */)arg3;
- (id)promotedContentWithoutFetchWithType:(long long)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (void)registerDenylistEvaluator:(id /* block */)arg1;
- (void)registerHandlerForAllMetricsWithClosure:(id /* block */)arg1;
- (void)removeHandler;
- (void)setPrefetchTimestamp:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PromotedContentUI.framework/PromotedContentUI

+ (void)cleanupWithIdentifier:(id)arg1;
+ (void)start;

- (void)intersititialReady:(id /* block */)arg1;
- (id)nativePromotedContentViewWithInfo:(id)arg1 contentView:(id)arg2;
- (id)nativePromotedContentViewWithInfo:(id)arg1 contentView:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3;
- (id)nativePromotedContentViewWithInfo:(id)arg1 contentView:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 position:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)newInterstitialRequest:(id)arg1;
- (void)newNativeRequest:(id)arg1;
- (void)newPromotedContent:(id)arg1;
- (id)promotedContentInterstitialViewWithInfo:(id)arg1;
- (id)promotedContentInterstitialWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)promotedContentVideo;
- (id)promotedContentViewOfType:(long long)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)promotedContentViewOfType:(long long)arg1 size:(struct CGSize { double x1; double x2; })arg2 startsCollapsed:(bool)arg3;
- (id)promotedContentViewOfType:(long long)arg1 size:(struct CGSize { double x1; double x2; })arg2 startsCollapsed:(bool)arg3 position:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;

@end
