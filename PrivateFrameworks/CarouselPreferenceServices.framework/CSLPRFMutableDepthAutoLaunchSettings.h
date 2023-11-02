
@interface CSLPRFMutableDepthAutoLaunchSettings : CSLPRFDepthAutoLaunchSettings

@property (nonatomic) long long autoLaunchBehavior;
@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic) unsigned long long changeSource;
@property (nonatomic) long long threshold;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAutoLaunchBehavior:(long long)arg1;
- (void)setBundleID:(id)arg1;
- (void)setChangeSource:(unsigned long long)arg1;
- (void)setThreshold:(long long)arg1;

@end
