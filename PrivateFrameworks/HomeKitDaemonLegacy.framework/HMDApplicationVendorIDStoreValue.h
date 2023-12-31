
@interface HMDApplicationVendorIDStoreValue : HMFObject <NSSecureCoding> {
    NSString * _applicationBundleId;
    NSString * _companionAppBundleId;
    bool  _spiClient;
    NSData * _vendorIdSha1;
}

@property (nonatomic, readonly) NSString *applicationBundleId;
@property (nonatomic, readonly) NSString *companionAppBundleId;
@property (nonatomic, readonly) bool spiClient;
@property (nonatomic, readonly) NSData *vendorIdSha1;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationBundleId;
- (id)companionAppBundleId;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVendorIDSha1:(id)arg1 applicationBundleId:(id)arg2 companionAppBundleId:(id)arg3 spiClient:(bool)arg4;
- (bool)spiClient;
- (id)vendorIdSha1;

@end
