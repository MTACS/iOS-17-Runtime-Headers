
@interface ICURLAggregatedPerformanceMetrics : NSObject <MPCPlaybackEngineEventPayloadValueJSONConvertible> {
    NSArray * _urlMetrics;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isNotEmpty;
@property (nonatomic, readonly) double networkTime;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *urlMetrics;

// Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud

+ (id)aggregatedMetricsFromAggregatedMetrics:(id)arg1 addingAggregatedMetrics:(id)arg2;
+ (id)aggregatedMetricsFromAggregatedMetrics:(id)arg1 addingMetrics:(id)arg2;

- (void).cxx_destruct;
- (id)initWithURLMetrics:(id)arg1;
- (bool)isNotEmpty;
- (double)networkTime;
- (void)setUrlMetrics:(id)arg1;
- (id)urlMetrics;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)payloadValueFromJSONValue:(id)arg1;

- (id)mpc_jsonValue;

@end
