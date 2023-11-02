
@interface PGDictionaryConfigurationSource : NSObject <PGConfigurationSource> {
    NSDictionary * _configurationData;
}

@property (nonatomic, copy) NSDictionary *configurationData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)configurationData;
- (id)initWithDictionary:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setConfigurationData:(id)arg1;

@end
