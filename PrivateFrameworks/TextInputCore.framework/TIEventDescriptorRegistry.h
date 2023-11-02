
@interface TIEventDescriptorRegistry : NSObject {
    NSDictionary * _config;
    NSMutableDictionary * _eventDescriptors;
    NSMutableDictionary * _eventSpecs;
    bool  _loaded;
    NSLock * _lock;
}

@property (nonatomic, retain) NSDictionary *config;
@property (nonatomic, readonly) NSDictionary *eventDescriptors;
@property (nonatomic, readonly) NSDictionary *eventSpecs;
@property (nonatomic) bool loaded;

+ (id)registry;
+ (id)registryWithConfig:(id)arg1;
+ (id)registryWithDescriptors:(id)arg1 andSpecs:(id)arg2;

- (void).cxx_destruct;
- (void)_loadEventDescriptors;
- (id)allEventDescriptors;
- (id)config;
- (id)contextFromError:(id)arg1;
- (id)eventDescriptorWithName:(id)arg1;
- (id)eventDescriptors;
- (id)eventSpecWithName:(id)arg1;
- (id)eventSpecs;
- (id)initWithConfig:(id)arg1;
- (id)initWithDescriptors:(id)arg1 andSpecs:(id)arg2;
- (void)loadEventDescriptorsIfNecessary;
- (bool)loaded;
- (void)setConfig:(id)arg1;
- (void)setLoaded:(bool)arg1;
- (id)valueFromError:(id)arg1 forKey:(id)arg2;

@end
