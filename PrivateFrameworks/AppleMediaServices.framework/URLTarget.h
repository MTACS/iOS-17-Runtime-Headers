
@interface URLTarget : NSObject {
    NSString * _bundleID;
    long long  _defaultIndex;
    NSString * _normalScheme;
    NSString * _secureScheme;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic) long long defaultIndex;
@property (nonatomic, retain) NSString *normalScheme;
@property (nonatomic, retain) NSString *secureScheme;

+ (id)targetWithBundle:(id)arg1 scheme:(id)arg2 secureScheme:(id)arg3;

- (void).cxx_destruct;
- (id)bundleID;
- (long long)defaultIndex;
- (id)initWithBundle:(id)arg1 scheme:(id)arg2 secureScheme:(id)arg3;
- (id)normalScheme;
- (id)secureScheme;
- (void)setBundleID:(id)arg1;
- (void)setDefaultIndex:(long long)arg1;
- (void)setNormalScheme:(id)arg1;
- (void)setSecureScheme:(id)arg1;

@end
