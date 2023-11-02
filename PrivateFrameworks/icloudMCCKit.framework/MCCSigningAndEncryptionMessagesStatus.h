
@interface MCCSigningAndEncryptionMessagesStatus : NSObject <NSCopying, NSSecureCoding> {
    bool  _encryptMessagesIsEnabled;
    bool  _signMessagesIsEnabled;
}

@property (nonatomic) bool encryptMessagesIsEnabled;
@property (nonatomic) bool signMessagesIsEnabled;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)encryptMessagesIsEnabled;
- (id)initWithCoder:(id)arg1;
- (void)setEncryptMessagesIsEnabled:(bool)arg1;
- (void)setSignMessagesIsEnabled:(bool)arg1;
- (bool)signMessagesIsEnabled;

@end
