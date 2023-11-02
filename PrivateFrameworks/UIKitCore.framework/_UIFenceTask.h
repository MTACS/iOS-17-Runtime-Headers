
@interface _UIFenceTask : NSObject <BSInvalidatable> {
    BKSProcessAssertion * _assertion;
    unsigned long long  _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_invalidated;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_processRequiresFenceAssertions;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)invalidate;

@end
