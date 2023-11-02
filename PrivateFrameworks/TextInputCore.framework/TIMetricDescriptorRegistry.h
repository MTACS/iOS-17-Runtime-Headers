
@interface TIMetricDescriptorRegistry : NSObject {
    NSDictionary * _config;
    NSMutableSet * _invalidMetricNames;
    bool  _loaded;
    NSLock * _lock;
    NSMutableDictionary * _metricDescriptors;
}

@property (nonatomic, retain) NSDictionary *config;
@property (nonatomic, readonly) NSSet *invalidMetricNames;
@property (nonatomic) bool loaded;
@property (nonatomic, readonly) NSDictionary *metricDescriptors;

+ (id)registry;
+ (id)registryWithConfig:(id)arg1;
+ (id)registryWithDescriptors:(id)arg1 andInvalidMetricNames:(id)arg2;

- (void).cxx_destruct;
- (void)_loadMetricDescriptors;
- (id)allMetricDescriptors;
- (id)config;
- (id)contextFromError:(id)arg1;
- (id)initWithConfig:(id)arg1;
- (id)initWithDescriptors:(id)arg1 andInvalidMetricNames:(id)arg2;
- (id)invalidMetricNames;
- (void)loadMetricDescriptorsIfNecessary;
- (bool)loaded;
- (id)metricDescriptorWithName:(id)arg1;
- (id)metricDescriptors;
- (void)setConfig:(id)arg1;
- (void)setLoaded:(bool)arg1;
- (id)valueFromError:(id)arg1 forKey:(id)arg2;

@end
