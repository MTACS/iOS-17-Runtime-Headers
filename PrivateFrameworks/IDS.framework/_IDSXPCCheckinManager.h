
@interface _IDSXPCCheckinManager : NSObject {
    <IDSXPCAdapter> * _XPCAdapter;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _checkinLock;
    NSMutableDictionary * _connectionInfoByServiceIdentifier;
}

@property (nonatomic, retain) <IDSXPCAdapter> *XPCAdapter;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } checkinLock;
@property (nonatomic, retain) NSMutableDictionary *connectionInfoByServiceIdentifier;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)XPCAdapter;
- (void)_performLockedAccess:(id /* block */)arg1;
- (void)_temporarilyStoreMessage:(id)arg1 forServiceIdentifier:(id)arg2;
- (struct os_unfair_lock_s { unsigned int x1; })checkinLock;
- (id)connectionInfoByServiceIdentifier;
- (id)init;
- (id)initWithXPCAdapter:(id)arg1;
- (void)noteCreatedService:(id)arg1;
- (void)noteFinishedTransactionForService:(id)arg1;
- (void)setCheckinLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setConnectionInfoByServiceIdentifier:(id)arg1;
- (void)setXPCAdapter:(id)arg1;
- (void)teardownAll;
- (void)teardownService:(id)arg1;

@end
