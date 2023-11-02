
@interface SiriBluetoothContext : SiriContext {
    NSString * _address;
    NSNumber * _isEyesFree;
    NSNumber * _isTemporaryDevice;
}

@property (nonatomic, readonly) NSString *address;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)address;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBluetoothDevice:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEyesFree;
- (bool)isTemporaryDevice;

@end
