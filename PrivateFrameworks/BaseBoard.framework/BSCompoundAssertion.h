
@interface BSCompoundAssertion : NSObject <BSCompoundAssertionState, BSInvalidatable> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _dataLock;
    NSMutableOrderedSet * _dataLock_acquisitionRecords;
    NSObject<OS_os_log> * _dataLock_log;
    NSString * _identifierPrefix;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _syncLock;
    id /* block */  _syncLock_block;
    bool  _syncLock_invalid;
}

@property (getter=isActive, readonly) bool active;
@property (readonly) NSSet *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<OS_os_log> *log;
@property (readonly) NSOrderedSet *orderedContext;
@property (readonly) NSOrderedSet *orderedReasons;
@property (readonly) NSSet *reasons;
@property (readonly) Class superclass;

+ (id)assertionWithIdentifier:(id)arg1;
+ (id)assertionWithIdentifier:(id)arg1 stateDidChangeHandler:(id /* block */)arg2;
+ (id)new;

- (void).cxx_destruct;
- (id)acquireForReason:(id)arg1;
- (id)acquireForReason:(id)arg1 withContext:(id)arg2;
- (id)context;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)invalidate;
- (bool)isActive;
- (id)log;
- (id)orderedContext;
- (id)orderedReasons;
- (id)reasons;
- (void)setLog:(id)arg1;

@end
