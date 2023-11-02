
@interface HAPWiFiConfigurationControl : NSObject <HAPTLVProtocol, NSCopying> {
    HAPTLVUnsignedNumberValue * _cookie;
    NSString * _countryCodeConfiguration;
    HAPTLVUnsignedNumberValue * _operationTimeout;
    HAPWiFiConfigurationOperationTypeWrapper * _operationType;
    HAPWiFiStationConfiguration * _stationConfiguration;
    HAPWiFiConfigurationUpdateStatusWrapper * _updateStatus;
}

@property (nonatomic, retain) HAPTLVUnsignedNumberValue *cookie;
@property (nonatomic, retain) NSString *countryCodeConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *operationTimeout;
@property (nonatomic, retain) HAPWiFiConfigurationOperationTypeWrapper *operationType;
@property (nonatomic, retain) HAPWiFiStationConfiguration *stationConfiguration;
@property (readonly) Class superclass;
@property (nonatomic, retain) HAPWiFiConfigurationUpdateStatusWrapper *updateStatus;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)cookie;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCodeConfiguration;
- (id)description;
- (id)init;
- (id)initWithOperationType:(id)arg1 cookie:(id)arg2 updateStatus:(id)arg3 operationTimeout:(id)arg4 countryCodeConfiguration:(id)arg5 stationConfiguration:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)operationTimeout;
- (id)operationType;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setCookie:(id)arg1;
- (void)setCountryCodeConfiguration:(id)arg1;
- (void)setOperationTimeout:(id)arg1;
- (void)setOperationType:(id)arg1;
- (void)setStationConfiguration:(id)arg1;
- (void)setUpdateStatus:(id)arg1;
- (id)stationConfiguration;
- (id)updateStatus;

@end
