
@interface SCLSchoolModeManagerConfiguration : NSObject <NSCopying> {
    bool  _allowsNonTinkerPairing;
    NRPairedDeviceRegistry * _deviceRegistry;
    bool  _managesSchoolTimeSession;
    IDSService * _service;
    NSObject<OS_dispatch_workloop> * _workloop;
}

@property (nonatomic) bool allowsNonTinkerPairing;
@property (nonatomic, retain) NRPairedDeviceRegistry *deviceRegistry;
@property (nonatomic) bool managesSchoolTimeSession;
@property (nonatomic, retain) IDSService *service;
@property (nonatomic, retain) NSObject<OS_dispatch_workloop> *workloop;

- (void).cxx_destruct;
- (bool)allowsNonTinkerPairing;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deviceRegistry;
- (bool)managesSchoolTimeSession;
- (id)service;
- (void)setAllowsNonTinkerPairing:(bool)arg1;
- (void)setDeviceRegistry:(id)arg1;
- (void)setManagesSchoolTimeSession:(bool)arg1;
- (void)setService:(id)arg1;
- (void)setWorkloop:(id)arg1;
- (id)workloop;

@end
