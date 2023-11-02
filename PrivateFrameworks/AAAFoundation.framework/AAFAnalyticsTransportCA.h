
@interface AAFAnalyticsTransportCA : NSObject <AAFAnalyticsTransport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (oneway void)sendEvent:(id)arg1;

@end
