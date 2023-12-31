
@interface CRKFetchDevicesResultObject : CATTaskResultObject {
    NSArray * _connectedDevices;
}

@property (nonatomic, copy) NSArray *connectedDevices;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)connectedDevices;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setConnectedDevices:(id)arg1;

@end
