
@interface HMFNetworkServiceInfo : HMFObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _serviceDomain;
    NSString * _serviceName;
    NSString * _serviceType;
    NSDictionary * _txtRecord;
}

@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) NSString *configNumber;
@property (nonatomic, readonly) NSString *deviceID;
@property (nonatomic, readonly) bool isAirPlay;
@property (nonatomic, readonly) bool isHAP;
@property (nonatomic, readonly) bool isMatter;
@property (nonatomic, readonly) bool isTCP;
@property (nonatomic, readonly) bool isUDP;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *serviceDomain;
@property (nonatomic, readonly) NSString *serviceName;
@property (nonatomic, readonly) NSString *serviceType;
@property (nonatomic, readonly) NSString *stateNumber;
@property (nonatomic, readonly) NSString *statusFlag;
@property (nonatomic, readonly) NSDictionary *txtRecord;

+ (id)defaultServiceTypes;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)category;
- (id)configNumber;
- (id)deviceID;
- (id)initWithEndpoint:(id)arg1 txtRecord:(id)arg2;
- (id)initWithServiceName:(id)arg1 serviceType:(id)arg2 serviceDomain:(id)arg3 txtRecord:(id)arg4;
- (bool)isAirPlay;
- (bool)isEqual:(id)arg1;
- (bool)isHAP;
- (bool)isMatter;
- (bool)isTCP;
- (bool)isUDP;
- (id)model;
- (id)serviceDomain;
- (id)serviceName;
- (id)serviceType;
- (id)stateNumber;
- (id)statusFlag;
- (id)txtRecord;
- (void)updateWithServiceInfo:(id)arg1;

@end
