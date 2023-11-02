
@interface AFInstrumentationObserverConnection : NSObject <AFInvalidating>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)flushWithCompletion:(id /* block */)arg1;
- (id)initWithObservation:(id /* block */)arg1;
- (id)initWithObservation:(id /* block */)arg1 filterByInstrumentationTypes:(id)arg2;
- (void)invalidate;
- (void)waitUntilInvalidated;

@end
