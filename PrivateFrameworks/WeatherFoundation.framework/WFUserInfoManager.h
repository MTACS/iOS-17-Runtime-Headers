
@interface WFUserInfoManager : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    <WFUserInfoManagerDelegate> * _delegate;
    NSUbiquitousKeyValueStore * _encryptedStore;
    NSObject<OS_dispatch_queue> * _ubiquitousKVSCommunicationsQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, retain) <WFUserInfoManagerDelegate> *delegate;
@property (nonatomic, readonly) NSUbiquitousKeyValueStore *encryptedStore;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *ubiquitousKVSCommunicationsQueue;

- (void).cxx_destruct;
- (id)callbackQueue;
- (void)dealloc;
- (id)delegate;
- (id)encryptedStore;
- (void)encryptedStoreChanged:(id)arg1;
- (id)init;
- (void)readUserIdentifierAndNotify;
- (void)setCallbackQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setUbiquitousKVSCommunicationsQueue:(id)arg1;
- (void)synchronize;
- (id)ubiquitousKVSCommunicationsQueue;

@end
