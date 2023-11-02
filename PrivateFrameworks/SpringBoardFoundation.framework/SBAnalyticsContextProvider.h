
@interface SBAnalyticsContextProvider : NSObject <SBFAnalyticsBackendEventContextProviding> {
    SBFAnalyticsBackend * _backend;
    SBSAnalyticsState * _eventPayload;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SBSAnalyticsState *eventPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)eventPayload;
- (id)initWithEventPayload:(id)arg1 backend:(id)arg2;
- (void)stateForQueryName:(unsigned long long)arg1 completion:(id /* block */)arg2;

@end
