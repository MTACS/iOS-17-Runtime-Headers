
@interface _HDSPPowerAssertion : NSObject <BSDescriptionProviding, HDSPAssertion> {
    unsigned int  _assertionID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _assertionLock;
    NSString * _identifier;
    unsigned long long  _signpost_id;
}

@property (nonatomic, readonly) unsigned int assertionID;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } assertionLock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) unsigned long long signpost_id;
@property (readonly) Class superclass;

+ (id)assertionWithIdentifier:(id)arg1;
+ (id)assertionWithIdentifier:(id)arg1 timeout:(double)arg2;

- (void).cxx_destruct;
- (void)_locked_release;
- (void)_withLock:(id /* block */)arg1;
- (unsigned int)assertionID;
- (struct os_unfair_lock_s { unsigned int x1; })assertionLock;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 timeout:(double)arg2;
- (void)releaseAssertion;
- (unsigned long long)signpost_id;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
