
@interface ASDInstallWebAttributionParamsConfig : NSObject <NSSecureCoding> {
    NSString * _adNetworkRegistrableDomain;
    NSNumber * _appAdamId;
    long long  _attributionContext;
    NSString * _impressionId;
    NSString * _sourceWebRegistrableDomain;
    NSString * _version;
}

@property (nonatomic, retain) NSString *adNetworkRegistrableDomain;
@property (nonatomic, retain) NSNumber *appAdamId;
@property (nonatomic) long long attributionContext;
@property (nonatomic, retain) NSString *impressionId;
@property (nonatomic, retain) NSString *sourceWebRegistrableDomain;
@property (nonatomic, retain) NSString *version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)adNetworkRegistrableDomain;
- (id)appAdamId;
- (long long)attributionContext;
- (void)encodeWithCoder:(id)arg1;
- (id)impressionId;
- (id)initWithCoder:(id)arg1;
- (void)setAdNetworkRegistrableDomain:(id)arg1;
- (void)setAppAdamId:(id)arg1;
- (void)setAttributionContext:(long long)arg1;
- (void)setImpressionId:(id)arg1;
- (void)setSourceWebRegistrableDomain:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)sourceWebRegistrableDomain;
- (id)version;

@end
