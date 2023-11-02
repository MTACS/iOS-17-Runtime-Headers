
@interface AMSTelephonyDataCache : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientSuppServicesDelegate> {
    CTXPCContexts * _activeContexts;
    CoreTelephonyClient * _client;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) CTXPCContexts *activeContexts;
@property (nonatomic, readonly) NSArray *carrierNames;
@property (nonatomic, retain) CoreTelephonyClient *client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)sharedCache;

- (void).cxx_destruct;
- (void)_clearCaches:(id)arg1;
- (id)activeContexts;
- (void)activeSubscriptionsDidChange;
- (id)carrierNames;
- (id)carrierNamesPromise;
- (id)carrierNamesWithError:(id*)arg1;
- (id)client;
- (id)initWithClientClass:(Class)arg1;
- (id)initWithTelephonyClient:(id)arg1 queue:(id)arg2;
- (void)phoneNumberChanged:(id)arg1;
- (id)queue;
- (void)setClient:(id)arg1;
- (void)setQueue:(id)arg1;

@end
