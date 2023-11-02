
@interface AAFAnalyticsReporter : NSObject {
    <AAFAnalyticsTransport> * _transport;
}

@property (nonatomic, retain) <AAFAnalyticsTransport> *transport;

+ (id)analyticsReporterWithTransport:(id)arg1;

- (void).cxx_destruct;
- (void)_sendEvent:(id)arg1;
- (id)initWithTransport:(id)arg1;
- (void)sendEvent:(id)arg1;
- (void)setTransport:(id)arg1;
- (id)transport;

@end
