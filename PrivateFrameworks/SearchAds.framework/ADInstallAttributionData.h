
@interface ADInstallAttributionData : NSObject {
    NSString * _adNetworkID;
    NSNumber * _adamID;
    NSNumber * _campaignID;
    NSString * _signature;
    NSNumber * _sourceAppAdamID;
    NSNumber * _timestamp;
    NSString * _uuid;
    NSString * _version;
}

@property (nonatomic, readonly, copy) NSString *adNetworkID;
@property (nonatomic, readonly, copy) NSNumber *adamID;
@property (nonatomic, readonly, copy) NSNumber *campaignID;
@property (nonatomic, readonly, copy) NSString *signature;
@property (nonatomic, readonly, copy) NSNumber *sourceAppAdamID;
@property (nonatomic, readonly, copy) NSNumber *timestamp;
@property (nonatomic, readonly, copy) NSString *uuid;
@property (nonatomic, readonly, copy) NSString *version;

- (void).cxx_destruct;
- (id)adNetworkID;
- (id)adamID;
- (id)campaignID;
- (id)dictionaryRepresentation;
- (id)initWithDict:(id)arg1;
- (void)recordStoreKitAdTap:(id /* block */)arg1;
- (id)signature;
- (id)sourceAppAdamID;
- (id)timestamp;
- (id)uuid;
- (id)version;

@end
