
@interface CHSRemoteDevicesBox : NSObject <CHSXPCEncodable> {
    NSData * _archivedData;
    NSArray * _devices;
}

@property (nonatomic, readonly, copy) NSArray *devices;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)devices;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevices:(id)arg1;
- (void)prepareForEncoding;

@end
