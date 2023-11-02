
@interface NSSNewsAnalyticsPBEventAccumulator : NSObject {
    NSSNewsAnalyticsEnvelopeDescriptor * _envelopeDescriptor;
    NSMutableArray * _events;
    <NSSNewsAnalyticsSessionManager> * _sessionManager;
}

@property (nonatomic, readonly, copy) NSSNewsAnalyticsEnvelopeDescriptor *envelopeDescriptor;
@property (nonatomic, readonly) NSMutableArray *events;
@property (nonatomic, readonly) <NSSNewsAnalyticsSessionManager> *sessionManager;

- (void).cxx_destruct;
- (id)dequeueEventsIntoEnvelope;
- (id)envelopeDescriptor;
- (id)events;
- (id)init;
- (id)initWithEnvelopeDescriptor:(id)arg1 sessionManager:(id)arg2;
- (void)observeEvent:(id)arg1;
- (void)observeEvents:(id)arg1;
- (id)sessionManager;

@end
