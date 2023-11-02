
@interface PKAuthenticatorPreflightContext : NSObject <PKInvalidatable> {
    LAContext * _context;
    bool  _invalidated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    long long  _validReferenceCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clearIfPossibleUnsafe;
- (id)context;
- (void)dealloc;
- (void)decrementValidReferenceCount;
- (void)incrementValidReferenceCount;
- (id)init;
- (void)invalidate;
- (bool)isInvalidated;

@end
