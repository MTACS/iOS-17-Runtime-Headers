
@interface BUCellularIdentity : NSObject {
    NSString * _defaultsKey;
    bool  _roaming;
    NSString * _simIdentity;
}

@property (nonatomic, readonly) NSString *defaultsKey;
@property (getter=isRoaming, nonatomic) bool roaming;
@property (nonatomic, readonly) NSString *simIdentity;

+ (id)_digestMD5:(id)arg1;
+ (id)identityForSubscription:(id)arg1 usingClient:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)defaultsKey;
- (id)description;
- (id)initWithSIMIdentity:(id)arg1 roaming:(bool)arg2;
- (bool)isRoaming;
- (id)redactedDescription;
- (void)setRoaming:(bool)arg1;
- (id)simIdentity;

@end
