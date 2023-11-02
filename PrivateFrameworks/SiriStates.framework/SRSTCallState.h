
@interface SRSTCallState : NSObject {
    _SRSTCallState * _underlyingObject;
}

@property (nonatomic, readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) _SRSTCallState *underlyingObject;

+ (id)micMutedCall;
+ (id)new;
+ (id)noCall;
+ (id)onHoldCall;
+ (id)ongoingCall;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithUnderlyingObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)makeProxy;
- (id)name;
- (id)underlyingObject;

@end
