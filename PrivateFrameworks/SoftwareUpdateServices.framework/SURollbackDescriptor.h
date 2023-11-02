
@interface SURollbackDescriptor : NSObject <NSCopying, NSSecureCoding> {
    NSString * _productBuildVersion;
    NSString * _productVersion;
    NSString * _releaseType;
    NSString * _restoreVersion;
}

@property (nonatomic, retain) NSString *productBuildVersion;
@property (nonatomic, retain) NSString *productVersion;
@property (nonatomic, retain) NSString *releaseType;
@property (nonatomic, retain) NSString *restoreVersion;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)productBuildVersion;
- (id)productVersion;
- (id)releaseType;
- (id)restoreVersion;
- (void)setProductBuildVersion:(id)arg1;
- (void)setProductVersion:(id)arg1;
- (void)setReleaseType:(id)arg1;
- (void)setRestoreVersion:(id)arg1;

@end
