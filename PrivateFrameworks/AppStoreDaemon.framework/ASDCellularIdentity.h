
@interface ASDCellularIdentity : NSObject {
    NSString * _defaultsKey;
    bool  _roaming;
    NSString * _simIdentity;
}

@property (readonly) NSString *defaultsKey;
@property (getter=isRoaming, readonly) bool roaming;
@property (readonly) NSString *simIdentity;

+ (id)identityForSubscription:(id)arg1 usingClient:(id)arg2 error:(id*)arg3;
+ (id)nullIdentity;

- (void).cxx_destruct;
- (id)copyWithRoaming:(bool)arg1;
- (id)defaultsKey;
- (id)description;
- (bool)isRoaming;
- (id)simIdentity;

@end
