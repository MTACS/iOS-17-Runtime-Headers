
@interface DEPDeviceUploadDeviceDetails : NSObject <NSSecureCoding> {
    NSString * _deviceUploadStatus;
    NSString * _errorMessage;
    NSString * _serialNumber;
}

@property (nonatomic, readonly) NSString *deviceUploadStatus;
@property (nonatomic, readonly) NSString *errorMessage;
@property (nonatomic, readonly) NSString *serialNumber;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)deviceUploadStatus;
- (void)encodeWithCoder:(id)arg1;
- (id)errorMessage;
- (id)initWithCoder:(id)arg1;
- (id)initWithDict:(id)arg1;
- (id)serialNumber;

@end
