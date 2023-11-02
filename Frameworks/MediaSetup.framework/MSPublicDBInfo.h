
@interface MSPublicDBInfo : NSObject <NSSecureCoding> {
    NSArray * _bundleIDS;
    NSString * _configurationPublicKey;
    NSString * _recordName;
    NSString * _serviceID;
    NSURL * _serviceIconPath;
    NSString * _serviceName;
    NSString * _serviceType;
}

@property (nonatomic, retain) NSArray *bundleIDS;
@property (nonatomic, copy) NSString *configurationPublicKey;
@property (nonatomic, copy) NSString *recordName;
@property (nonatomic, readonly, copy) NSString *serviceID;
@property (nonatomic, copy) NSURL *serviceIconPath;
@property (nonatomic, readonly, copy) NSString *serviceName;
@property (nonatomic, copy) NSString *serviceType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIDS;
- (id)configurationPublicKey;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServiceName:(id)arg1 serviceID:(id)arg2;
- (id)recordName;
- (id)serviceID;
- (id)serviceIconPath;
- (id)serviceName;
- (id)serviceType;
- (void)setBundleIDS:(id)arg1;
- (void)setConfigurationPublicKey:(id)arg1;
- (void)setRecordName:(id)arg1;
- (void)setServiceIconPath:(id)arg1;
- (void)setServiceType:(id)arg1;

@end
