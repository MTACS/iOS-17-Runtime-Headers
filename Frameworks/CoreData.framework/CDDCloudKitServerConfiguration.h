
@interface CDDCloudKitServerConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSString * _machServiceName;
    NSString * _storeDirectoryPath;
}

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
