
@interface APPCPromotedContentInfo : NSObject {
    void metricsHelper;
    void placeholder;
    void promotedContent;
    void ready;
    void unfilledReason;
}

@property (nonatomic, readonly) long long desiredPosition;
@property (nonatomic, readonly) long long errorReason;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isDownloadable;
@property (nonatomic, readonly) bool isInteractive;
@property (nonatomic, readonly) bool isVideo;
@property (nonatomic, readonly) <APPCLifecycleMetricsHelping> *metricsHelper;
@property (nonatomic, readonly) APPCNativeRepresentation *nativeInfo;
@property (nonatomic) bool placeholder;
@property (nonatomic, readonly) id /* block */ ready;
@property (nonatomic) long long unfilledReason;

- (void).cxx_destruct;
- (void)dealloc;
- (long long)desiredPosition;
- (long long)errorReason;
- (id)identifier;
- (id)init;
- (bool)isDownloadable;
- (bool)isInteractive;
- (bool)isVideo;
- (id)metricsHelper;
- (id)nativeInfo;
- (bool)placeholder;
- (id /* block */)ready;
- (void)setPlaceholder:(bool)arg1;
- (void)setUnfilledReason:(long long)arg1;
- (long long)unfilledReason;

@end
