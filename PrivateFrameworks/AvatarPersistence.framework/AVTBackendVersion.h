
@interface AVTBackendVersion : NSObject <NSSecureCoding> {
    double  _avatarKitVersion;
    double  _backendVersion;
}

@property (nonatomic, readonly) double avatarKitVersion;
@property (nonatomic, readonly) double backendVersion;

+ (id)currentVersion;
+ (bool)supportsSecureCoding;
+ (id)versionFileLocationForStoreLocation:(id)arg1;
+ (id)versionFromDiskAtLocation:(id)arg1 error:(id*)arg2;

- (double)avatarKitVersion;
- (double)backendVersion;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBackendVersion:(double)arg1 avatarKitVersion:(double)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)saveToDiskAtLocation:(id)arg1 error:(id*)arg2;

@end
