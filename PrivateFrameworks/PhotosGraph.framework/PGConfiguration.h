
@interface PGConfiguration : NSObject {
    double  _version;
}

@property (nonatomic, readonly) double version;

+ (id)_persistedConfigurationPath;
+ (id)name;
+ (id)persistedConfiguration;

- (id)_configurationDictionary;
- (void)_configureWithSource:(id)arg1 propertyKeys:(id)arg2;
- (void)deletePersistedConfiguration;
- (id)description;
- (id)initWithSources:(id)arg1 version:(double)arg2;
- (void)persistConfiguration;
- (id)propertyKeys;
- (id)propertyNamesForProperties:(struct objc_property {}**)arg1 propertyCount:(unsigned int)arg2;
- (double)version;

@end
