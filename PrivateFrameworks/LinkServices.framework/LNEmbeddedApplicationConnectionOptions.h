
@interface LNEmbeddedApplicationConnectionOptions : LNConnectionOptions <LNApplicationConnectionOptions> {
    bool  _allowsForegroundAppLaunchWhileInCarPlay;
    long long  _openApplicationPriority;
    bool  _sceneless;
    bool  _suspended;
    bool  _useSpotlightLaunchOrigin;
}

@property (nonatomic) bool allowsForegroundAppLaunchWhileInCarPlay;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isForeground;
@property (nonatomic) long long openApplicationPriority;
@property (nonatomic) bool sceneless;
@property (readonly) Class superclass;
@property (nonatomic) bool suspended;
@property (nonatomic) bool useSpotlightLaunchOrigin;

- (bool)allowsForegroundAppLaunchWhileInCarPlay;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isForeground;
- (long long)openApplicationPriority;
- (bool)sceneless;
- (void)setAllowsForegroundAppLaunchWhileInCarPlay:(bool)arg1;
- (void)setOpenApplicationPriority:(long long)arg1;
- (void)setSceneless:(bool)arg1;
- (void)setSuspended:(bool)arg1;
- (void)setUseSpotlightLaunchOrigin:(bool)arg1;
- (bool)suspended;
- (bool)useSpotlightLaunchOrigin;

@end
