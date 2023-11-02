
@interface DMFFetchAvailableOSUpdatesRequest : DMFTaskRequest {
    NSString * _productVersion;
    bool  _useDelay;
}

@property (nonatomic, copy) NSString *productVersion;
@property (nonatomic) bool useDelay;

+ (Class)allowlistedClassForResultObject;
+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)productVersion;
- (void)setProductVersion:(id)arg1;
- (void)setUseDelay:(bool)arg1;
- (bool)useDelay;

@end
