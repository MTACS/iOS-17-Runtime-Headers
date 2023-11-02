
@interface DEPDeviceUploadUser : NSObject <NSSecureCoding> {
    NSString * _dsid;
    NSString * _name;
}

@property (nonatomic, readonly) NSString *dsid;
@property (nonatomic, readonly) NSString *name;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dsid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithApproverDict:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDsid:(id)arg1 name:(id)arg2;
- (id)name;

@end
