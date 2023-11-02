
@interface NEIPSecSASession : NSObject {
    NSObject<NEIPSecSASessionDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _internalDelegateQueue;
    NSMutableArray * _larvalSAs;
    NSString * _name;
    NSMutableArray * _securityAssociations;
    unsigned long long  _uniqueIndex;
}

@property NSObject<NEIPSecSASessionDelegate> *delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) NSString *name;
@property (readonly) NSArray *securityAssociations;

- (void).cxx_destruct;
- (bool)addLarvalSA:(id)arg1;
- (bool)addSA:(id)arg1;
- (id)copyEmptySASession;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)description;
- (id)initWithName:(id)arg1 delegate:(id)arg2;
- (void)invalidate;
- (bool)migrateSA:(id)arg1;
- (id)name;
- (void)removeAllSAs;
- (bool)removeSA:(id)arg1;
- (id)securityAssociations;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)startBlackholeDetection:(unsigned int)arg1 incomingSA:(id)arg2 outgoingSA:(id)arg3;
- (void)startIdleTimeout:(unsigned int)arg1 incomingSA:(id)arg2 outgoingSA:(id)arg3;
- (bool)updateSA:(id)arg1;

@end
