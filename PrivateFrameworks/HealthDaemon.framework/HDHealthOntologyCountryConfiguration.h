
@interface HDHealthOntologyCountryConfiguration : NSObject {
    unsigned long long  _analyticsOptions;
    NSString * _countryCode;
    NSSet * _supportedCodingSystems;
}

@property (nonatomic, readonly) unsigned long long analyticsOptions;
@property (nonatomic, readonly, copy) NSString *countryCode;
@property (nonatomic, readonly, copy) NSSet *supportedCodingSystems;

- (void).cxx_destruct;
- (unsigned long long)analyticsOptions;
- (id)countryCode;
- (id)initWithCountryCode:(id)arg1 supportedCodingSystems:(id)arg2 analyticsOptions:(unsigned long long)arg3;
- (id)supportedCodingSystems;

@end
