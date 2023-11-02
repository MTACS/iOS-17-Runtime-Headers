
@interface CPSLocationConfirmationRequest : NSObject <NSCopying, NSSecureCoding> {
    NSString * _applicationName;
    NSString * _clipBundleID;
    CLLocation * _deviceLocation;
    CLRegion * _expectedRegion;
    long long  _requestState;
}

@property (nonatomic, readonly) NSString *applicationName;
@property (nonatomic, readonly) NSString *clipBundleID;
@property (nonatomic, readonly) CLLocation *deviceLocation;
@property (nonatomic, readonly) CLRegion *expectedRegion;
@property (nonatomic, readonly) long long requestState;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationName;
- (id)clipBundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deviceLocation;
- (void)encodeWithCoder:(id)arg1;
- (id)expectedRegion;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestState:(long long)arg1 clipBundleID:(id)arg2 applicationName:(id)arg3 deviceLocation:(id)arg4 expectedRegion:(id)arg5;
- (long long)requestState;

@end
