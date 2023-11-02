
@interface HDConceptResolutionConfiguration : NSObject {
    NSString * _countryCode;
    unsigned long long  _options;
    long long  _recordCategoryType;
}

@property (nonatomic, readonly, copy) NSString *countryCode;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) long long recordCategoryType;

- (void).cxx_destruct;
- (id)countryCode;
- (id)description;
- (id)init;
- (id)initWithCountryCode:(id)arg1;
- (id)initWithCountryCode:(id)arg1 recordCategoryType:(long long)arg2 options:(unsigned long long)arg3;
- (unsigned long long)options;
- (long long)recordCategoryType;

@end
