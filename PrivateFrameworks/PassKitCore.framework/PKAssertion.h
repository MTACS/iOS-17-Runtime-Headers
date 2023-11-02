
@interface PKAssertion : NSObject {
    NSString * _identifier;
    bool  _invalidateWhenBackgrounded;
    id /* block */  _invalidationHandler;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _invalidationLock;
    NSString * _reason;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool invalidateWhenBackgrounded;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, readonly) NSString *reason;
@property (nonatomic, readonly) unsigned long long type;

+ (void)acquireAssertionOfType:(unsigned long long)arg1 withReason:(id)arg2 completion:(id /* block */)arg3;
+ (void)isAssertionValid:(id)arg1 completion:(id /* block */)arg2;
+ (void)preheatConnection;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)identifier;
- (id)initWithType:(unsigned long long)arg1 identifier:(id)arg2 reason:(id)arg3;
- (void)invalidate;
- (bool)invalidateWhenBackgrounded;
- (id /* block */)invalidationHandler;
- (void)markAsInvalidatedAndNotify;
- (id)reason;
- (void)setIdentifier:(id)arg1;
- (void)setInvalidateWhenBackgrounded:(bool)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (unsigned long long)type;

@end
