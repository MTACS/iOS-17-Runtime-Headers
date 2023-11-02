
@interface HDHealthOntologyConfiguration : NSObject {
    NSDictionary * _countryConfigurations;
}

@property (nonatomic, readonly, copy) NSArray *allCountryConfigurations;

+ (id)bundledHealthOntologyConfiguration;

- (void).cxx_destruct;
- (id)allCountryConfigurations;
- (id)configurationForCountryCode:(id)arg1;
- (id)init;
- (id)initWithCountryConfigurations:(id)arg1;

@end
