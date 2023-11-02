
@interface _ANEAnalyticsTask : NSObject {
    NSDictionary * _metrics;
}

@property (nonatomic, readonly) NSDictionary *metrics;

+ (id)objectWithMetrics:(id)arg1;

- (void).cxx_destruct;
- (id)initWithMetrics:(id)arg1;
- (id)metrics;
- (id)serialize;

@end
