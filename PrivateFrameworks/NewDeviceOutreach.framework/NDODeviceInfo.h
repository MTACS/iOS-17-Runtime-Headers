
@interface NDODeviceInfo : NSObject <NSSecureCoding> {
    NDODevice * _device;
    NDOWarranty * _warranty;
}

@property (retain) NDODevice *device;
@property (retain) NDOWarranty *warranty;

+ (id)deviceInfoWithDevice:(id)arg1 warranty:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)device;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1 warranty:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setWarranty:(id)arg1;
- (id)warranty;

@end
