
@interface CDDCloudKitMessage : NSObject <NSCoding, NSSecureCoding> {
    NSUUID * _identifier;
}

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
