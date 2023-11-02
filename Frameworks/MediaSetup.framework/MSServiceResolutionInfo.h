
@interface MSServiceResolutionInfo : NSObject <NSSecureCoding> {
    MSServiceAppInfo * _serviceAppInfo;
    MSUserAccountInfo * _userAccountInfo;
}

@property (nonatomic, readonly) MSServiceAppInfo *serviceAppInfo;
@property (nonatomic, readonly) MSUserAccountInfo *userAccountInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServiceAppInfo:(id)arg1 userAccountInfo:(id)arg2;
- (id)serviceAppInfo;
- (id)userAccountInfo;

@end
