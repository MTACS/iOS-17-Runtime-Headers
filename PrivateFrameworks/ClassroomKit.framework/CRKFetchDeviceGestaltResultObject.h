
@interface CRKFetchDeviceGestaltResultObject : CATTaskResultObject {
    CRKDeviceGestalt * _deviceGestalt;
}

@property (nonatomic, retain) CRKDeviceGestalt *deviceGestalt;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)deviceGestalt;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDeviceGestalt:(id)arg1;

@end
