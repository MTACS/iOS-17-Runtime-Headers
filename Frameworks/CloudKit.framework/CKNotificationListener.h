
@interface CKNotificationListener : NSObject <APSConnectionDelegate, CKPKPushRegistryDelegate, CKPropertiesDescription> {
    APSConnection * _apsConnection;
    NSString * _apsEnvironment;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSString * _machServiceName;
    NSArray * _notificationObservers;
    NSOperationQueue * _operationQueue;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _strategy;
    NSMutableDictionary * _subscriptionInfos;
    bool  _useOpportunisticPushTopics;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *machServiceName;
@property (retain) NSArray *notificationObservers;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property bool useOpportunisticPushTopics;

- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (id)apsConnectionOnQueue;
- (void)connection:(id)arg1 didChangeConnectedStatus:(bool)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connectionDidReconnect:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)didReceiveIncomingPushWithPayload:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)handlePushNotificationWithPayload:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)hasInitializedAPSConnection;
- (id)init;
- (id)initWithMachServiceName:(id)arg1;
- (id)initWithStrategy:(unsigned long long)arg1;
- (id)initWithStrategy:(unsigned long long)arg1 machServiceName:(id)arg2;
- (bool)isRegisteredForSubscriptionWithID:(id)arg1 inDatabase:(id)arg2;
- (id)machServiceName;
- (id)notificationObservers;
- (id)queue;
- (id)redactedDescription;
- (void)registerForSubscriptionWithID:(id)arg1 inDatabase:(id)arg2 handler:(id /* block */)arg3;
- (void)setNotificationObservers:(id)arg1;
- (void)setUseOpportunisticPushTopics:(bool)arg1;
- (id)uniqueKeyForSubscriptionID:(id)arg1 inDatabase:(id)arg2;
- (void)unregisterForSubscriptionWithID:(id)arg1 inDatabase:(id)arg2;
- (bool)useOpportunisticPushTopics;

@end
