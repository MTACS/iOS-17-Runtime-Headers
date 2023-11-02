
@interface MSDStoreContactsModel : NSObject {
    NSMutableDictionary * _countryCodeToNumbers;
    NSDictionary * _regionToCountryCode;
}

@property (nonatomic, retain) NSMutableDictionary *countryCodeToNumbers;
@property (nonatomic, readonly) NSDictionary *regionToCountryCode;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)contactNumberForCountryCode:(id)arg1;
- (id)countryCodeToNumbers;
- (id)init;
- (id)regionToCountryCode;
- (void)setCountryCodeToNumbers:(id)arg1;

@end
