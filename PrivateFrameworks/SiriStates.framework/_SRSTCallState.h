
@interface _SRSTCallState : NSObject {
    void eventHandler;
    void name;
    void parent;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *name;

+ (id)micMutedCall;
+ (id)noCall;
+ (id)onHoldCall;
+ (id)ongoingCall;

- (void).cxx_destruct;
- (id)description;
- (long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)makeProxy;
- (id)name;

@end
