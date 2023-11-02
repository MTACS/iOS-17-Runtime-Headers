
@interface NFCHardwareManager : NSObject <NFCHardwareManagerCallbacks, NFCSessionCallbacks> {
    NSHashTable * _delegates;
    NSObject<OS_dispatch_semaphore> * _hwSupportStateUpdate;
    NSMutableDictionary * _queuedReaderSessions;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerSessionLock;
    NFCSession * _xpcSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (getter=getDelegates, nonatomic, readonly, copy) NSArray *delegates;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedHardwareManager;

- (void).cxx_destruct;
- (void)addNFCHardwareManagerCallbacksListener:(id)arg1;
- (void)areFeaturesSupported:(unsigned long long)arg1 expiry:(double)arg2 completion:(id /* block */)arg3;
- (bool)areFeaturesSupported:(unsigned long long)arg1 outError:(id*)arg2;
- (void)dequeueReaderSession:(id)arg1;
- (void)didInvalidate;
- (id)getDelegates;
- (id)getReaderSessionWithKey:(id)arg1;
- (void)hwStateDidChange:(unsigned int)arg1;
- (id)init;
- (void)queueReaderSession:(id)arg1 sessionConfig:(id)arg2 completionHandler:(id /* block */)arg3;

@end
