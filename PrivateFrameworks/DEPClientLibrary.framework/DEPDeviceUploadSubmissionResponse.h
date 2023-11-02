
@interface DEPDeviceUploadSubmissionResponse : NSObject <NSSecureCoding> {
    NSArray * _devices;
    NSString * _errorMessage;
    NSString * _requestId;
    NSString * _requestStatus;
}

@property (nonatomic, readonly) NSArray *devices;
@property (nonatomic, readonly) NSString *errorMessage;
@property (nonatomic, readonly) NSString *requestId;
@property (nonatomic, readonly) NSString *requestStatus;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_devicesFromDeviceArray:(id)arg1;
- (id)devices;
- (void)encodeWithCoder:(id)arg1;
- (id)errorMessage;
- (id)initWithCoder:(id)arg1;
- (id)initWithDict:(id)arg1;
- (id)requestId;
- (id)requestStatus;

@end
