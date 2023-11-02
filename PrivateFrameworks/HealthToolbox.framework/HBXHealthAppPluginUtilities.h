
@interface HBXHealthAppPluginUtilities : NSObject {
    long long  _configurationOverride;
    NSString * _simulatorPathOverride;
}

@property (nonatomic, readonly, copy) NSString *feedItemPluginsPath;
@property (nonatomic, retain) NSString *simulatorPathOverride;
@property (nonatomic, readonly, copy) NSString *systemPath;

+ (id)defaultUtilities;

- (void).cxx_destruct;
- (bool)_isCatalyst;
- (id)_rootPath;
- (id)_simulatorPath;
- (id)feedItemPluginsPath;
- (id)initWithConfigurationOverride:(long long)arg1;
- (void)setSimulatorPathOverride:(id)arg1;
- (id)simulatorPathOverride;
- (id)systemPath;

@end
