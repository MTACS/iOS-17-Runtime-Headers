
@interface PGAbstractMetricEvent : NSObject <PLMetricEvent>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDictionary *payload;
@property (readonly) Class superclass;

- (id)description;
- (void)gatherMetricsWithProgressBlock:(id /* block */)arg1;
- (id)identifier;
- (id)payload;

@end
