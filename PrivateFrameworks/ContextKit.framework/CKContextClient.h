
@interface CKContextClient : NSObject <CKContextServiceUpdateNotifications> {
    NSSet * _capabilities;
    unsigned long long  _defaultRequestType;
    NSString * _indexVersionId;
    CKContextSemaphore * _serviceSemaphore;
    NSMutableArray * _updateHandlers;
}

@property (nonatomic, readonly) NSSet *capabilities;
@property (nonatomic, readonly) unsigned long long defaultRequestType;

+ (void)_observeApplicationStateNotifications;
+ (id)clientWithDefaultRequestType:(unsigned long long)arg1;
+ (id)clientWithPreferredRequestType:(unsigned long long)arg1;
+ (void)initialize;
+ (bool)isLikelyUnsolicitedUserInteraction;
+ (id)new;
+ (double)timeIntervalBetweenMachTime:(unsigned long long)arg1 andMachTime:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)ancestorsForTopics:(id)arg1 withReply:(id /* block */)arg2;
- (id)capabilities;
- (void)capabilitiesWithReply:(id /* block */)arg1;
- (id)createRequest;
- (unsigned long long)defaultRequestType;
- (void)didReceiveCKContextServiceUpdateNotification;
- (void)ensureFullyInitialized;
- (void)groupResponses:(id)arg1 withReply:(id /* block */)arg2;
- (id)indexVersionId;
- (id)init;
- (id)initWithDefaultRequestType:(unsigned long long)arg1;
- (id)newRequest;
- (void)registerConfigurationUpdateHandler:(id /* block */)arg1;
- (id)retrieveCapabilites;
- (void)retrieveCapabilitiesWithReply:(id /* block */)arg1;
- (long long)tryAcquireServiceSemaphoreNeedsIncPending:(bool)arg1;
- (void)updateCachedCapabilitiesWithReply:(id /* block */)arg1;
- (void)workWithServiceSemaphore:(id /* block */)arg1;

@end
