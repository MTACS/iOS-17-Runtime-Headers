
@interface BKHIDEventSenderCache : NSObject <BKIOHIDServiceDisappearanceObserver> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _senderIDToSenderInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *senderIDToSenderInfo;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addSenderInfo:(id)arg1;
- (void)addSenderInfo:(id)arg1 forSenderID:(unsigned long long)arg2;
- (id)description;
- (id)initWithQueue:(id)arg1;
- (void)removeSenderInfo:(id)arg1;
- (id)senderIDToSenderInfo;
- (id)senderInfoForSenderID:(unsigned long long)arg1;
- (void)serviceDidDisappear:(id)arg1;
- (void)setSenderIDToSenderInfo:(id)arg1;
- (void)sync;

@end
