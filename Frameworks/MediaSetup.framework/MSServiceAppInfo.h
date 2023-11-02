
@interface MSServiceAppInfo : NSObject <NSSecureCoding> {
    NSArray * _alternateBundleIDS;
    NSString * _serviceBundleID;
    NSString * _serviceName;
}

@property (nonatomic, retain) NSArray *alternateBundleIDS;
@property (nonatomic, readonly, copy) NSString *serviceBundleID;
@property (nonatomic, readonly, copy) NSString *serviceName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alternateBundleIDS;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServiceName:(id)arg1 serviceBundleID:(id)arg2;
- (id)serviceBundleID;
- (id)serviceName;
- (void)setAlternateBundleIDS:(id)arg1;

@end
