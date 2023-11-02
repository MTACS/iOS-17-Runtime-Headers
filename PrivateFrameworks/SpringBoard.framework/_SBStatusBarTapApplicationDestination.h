
@interface _SBStatusBarTapApplicationDestination : NSObject <NSCopying> {
    SBApplication * _application;
    NSString * _sceneIdentifier;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSString *sceneIdentifier;

- (void).cxx_destruct;
- (id)application;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithApplication:(id)arg1 sceneIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)sceneIdentifier;

@end
