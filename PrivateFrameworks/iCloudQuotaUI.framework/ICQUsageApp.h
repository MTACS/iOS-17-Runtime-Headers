
@interface ICQUsageApp : NSObject {
    NSString * _bundleIdentifier;
    NSString * _bundleVersion;
    float  _dynamicSize;
    NSString * _name;
    float  _specialSize;
    float  _staticSize;
    bool  _systemApp;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) NSString *bundleVersion;
@property (nonatomic, readonly) float dataSize;
@property (nonatomic) float dynamicSize;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) float specialSize;
@property (nonatomic) float staticSize;
@property (getter=isSystemApp, nonatomic) bool systemApp;
@property (nonatomic, readonly) float totalSize;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (float)dataSize;
- (float)dynamicSize;
- (bool)isSystemApp;
- (id)name;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setDynamicSize:(float)arg1;
- (void)setName:(id)arg1;
- (void)setSpecialSize:(float)arg1;
- (void)setStaticSize:(float)arg1;
- (void)setSystemApp:(bool)arg1;
- (float)specialSize;
- (float)staticSize;
- (float)totalSize;

@end
