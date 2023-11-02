
@interface CTRemoteDeviceList : NSObject <NSSecureCoding> {
    NSMutableArray * _devices;
}

@property (nonatomic, retain) NSMutableArray *devices;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)devices;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setDevices:(id)arg1;

@end
