
@interface DEPDeviceUploadCredentials : NSObject <NSSecureCoding> {
    NSString * _dsToken;
    NSString * _dsid;
}

@property (nonatomic, readonly) NSString *dsToken;
@property (nonatomic, readonly) NSString *dsid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dsToken;
- (id)dsid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDsid:(id)arg1 dsToken:(id)arg2;

@end
