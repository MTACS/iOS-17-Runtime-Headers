
@interface WFWeatherDataServiceParserMetadataV1 : NSObject {
    long long  _dataOrigination;
    NSDate * _expireDate;
    NSString * _language;
    WFLocation * _location;
    NSURL * _providerLogoURL;
    NSString * _providerName;
    NSDate * _readDate;
    bool  _temporarilyUnavailable;
    unsigned long long  _version;
}

@property (nonatomic) long long dataOrigination;
@property (nonatomic, copy) NSDate *expireDate;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, retain) WFLocation *location;
@property (nonatomic, copy) NSURL *providerLogoURL;
@property (nonatomic, copy) NSString *providerName;
@property (nonatomic, copy) NSDate *readDate;
@property (nonatomic) bool temporarilyUnavailable;
@property (nonatomic) unsigned long long version;

- (void).cxx_destruct;
- (long long)dataOrigination;
- (id)expireDate;
- (id)language;
- (id)location;
- (id)providerLogoURL;
- (id)providerName;
- (id)readDate;
- (void)setDataOrigination:(long long)arg1;
- (void)setExpireDate:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setProviderLogoURL:(id)arg1;
- (void)setProviderName:(id)arg1;
- (void)setReadDate:(id)arg1;
- (void)setTemporarilyUnavailable:(bool)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (bool)temporarilyUnavailable;
- (unsigned long long)version;

@end
