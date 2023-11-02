
@interface BLSHDefaultHandler : NSObject <BSInvalidatable> {
    NSArray * _attributes;
    bool  _invalidated;
    NSString * _key;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BLSAssertion * _lock_assertion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)handlerForKey:(id)arg1 attributes:(id)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithKey:(id)arg1 attributes:(id)arg2;
- (void)invalidate;
- (void)updateForNewValue:(bool)arg1;

@end
