
@interface CSLPRFDepthAutoLaunchSettings : NSObject <NSCopying, NSMutableCopying> {
    long long  _autoLaunchBehavior;
    NSString * _bundleID;
    unsigned long long  _changeSource;
    long long  _threshold;
}

@property (nonatomic, readonly) long long autoLaunchBehavior;
@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic, readonly) unsigned long long changeSource;
@property (nonatomic, readonly) long long threshold;

- (void).cxx_destruct;
- (long long)autoLaunchBehavior;
- (id)bundleID;
- (unsigned long long)changeSource;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithSettings:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)threshold;

@end
