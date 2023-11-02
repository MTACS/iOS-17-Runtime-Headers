
@interface _CPDeviceContext : PBCodable <NSSecureCoding, _CPDeviceContext> {
    NSString * _country;
    NSString * _deviceModel;
    NSString * _locale;
    NSString * _osVersion;
}

@property (nonatomic, copy) NSString *country;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *deviceModel;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *locale;
@property (nonatomic, copy) NSString *osVersion;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)country;
- (id)deviceModel;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locale;
- (id)osVersion;
- (bool)readFrom:(id)arg1;
- (void)setCountry:(id)arg1;
- (void)setDeviceModel:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setOsVersion:(id)arg1;
- (void)writeTo:(id)arg1;

@end
