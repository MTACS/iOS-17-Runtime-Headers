
@interface TIAnalyticsServiceProviderImpl : NSObject <TIAnalyticsServiceProvider> {
    IAEventDispatcher * _dispatcher;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dispatchEventWithName:(id)arg1 payload:(id)arg2;
- (id)init;

@end
