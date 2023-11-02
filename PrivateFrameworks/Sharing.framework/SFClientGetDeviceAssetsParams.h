
@interface SFClientGetDeviceAssetsParams : NSObject <NSSecureCoding> {
    unsigned short  _bluetoothProductID;
    unsigned int  _colorCode;
    NSString * _model;
    double  _timeoutSeconds;
}

@property (nonatomic) unsigned short bluetoothProductID;
@property (nonatomic) unsigned int colorCode;
@property (nonatomic, copy) NSString *model;
@property (nonatomic) double timeoutSeconds;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned short)bluetoothProductID;
- (unsigned int)colorCode;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)model;
- (void)setBluetoothProductID:(unsigned short)arg1;
- (void)setColorCode:(unsigned int)arg1;
- (void)setModel:(id)arg1;
- (void)setTimeoutSeconds:(double)arg1;
- (double)timeoutSeconds;

@end
