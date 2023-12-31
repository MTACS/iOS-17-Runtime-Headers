
@interface PKCountryInfo : NSObject {
    NSString * _countryCode;
    NSString * _localizedCountryName;
}

@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic, retain) NSString *localizedCountryName;

- (void).cxx_destruct;
- (id)countryCode;
- (id)localizedCountryName;
- (void)setCountryCode:(id)arg1;
- (void)setLocalizedCountryName:(id)arg1;

@end
