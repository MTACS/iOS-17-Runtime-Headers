
@interface PromotedContent.MetricEventsTracker : _TtCs12_SwiftObject <APPCMetricEventsTracking> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  adRequestTimestamp;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  adResponseTimestamp;
    void analyticsEventName;
    void failedKey;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  finalPromotedContent;
    void intervalKey;
    void intervalTypeKey;
    void networkTypeKey;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  placeholderPlacedTimestamp;
    void placementTypeKey;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  prerollAdRequestTimestamp;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  prerollAdResponseTimestamp;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  replacedPlaceholderTimestamp;
}

@property (nonatomic, copy) NSDate *adResponseTimestamp;
@property (nonatomic, copy) NSDate *placeholderPlacedTimestamp;
@property (nonatomic, copy) NSDate *prerollAdRequestTimestamp;
@property (nonatomic, copy) NSDate *prerollAdResponseTimestamp;
@property (nonatomic, copy) NSDate *replacedPlaceholderTimestamp;

- (id)adResponseTimestamp;
- (void)didPlacePlaceholder;
- (void)didReceiveAdResponse;
- (void)didReceivePrerollVideoResponse;
- (void)didReplacePlaceholder;
- (void)didRequestPrerollVideo;
- (id)placeholderPlacedTimestamp;
- (id)prerollAdRequestTimestamp;
- (id)prerollAdResponseTimestamp;
- (id)replacedPlaceholderTimestamp;
- (void)sendAnalyticsEventFor:(long long)arg1 interval:(double)arg2 networkType:(unsigned long long)arg3 placementType:(unsigned long long)arg4 failed:(bool)arg5;
- (void)setAdResponseTimestamp:(id)arg1;
- (void)setPlaceholderPlacedTimestamp:(id)arg1;
- (void)setPrerollAdRequestTimestamp:(id)arg1;
- (void)setPrerollAdResponseTimestamp:(id)arg1;
- (void)setReplacedPlaceholderTimestamp:(id)arg1;

@end
