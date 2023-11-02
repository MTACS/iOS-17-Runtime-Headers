
@interface GTProcessService : NSObject <NSSecureCoding> {
    GTProcessInfo * _processInfo;
    GTServiceProperties * _serviceProperties;
}

@property (nonatomic, readonly) GTProcessInfo *processInfo;
@property (nonatomic, readonly) GTServiceProperties *serviceProperties;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithService:(id)arg1 processInfo:(id)arg2;
- (id)processInfo;
- (id)serviceProperties;

@end
