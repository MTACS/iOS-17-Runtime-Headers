
@interface VCSandboxedURL : NSURL <NSCopying, NSSecureCoding> {
    unsigned char  _accessType;
    bool  _deserialized;
    bool  _tokenConsumed;
    NSString * _urlToken;
    long long  _urlTokenHandle;
}

+ (id)deserialize:(id)arg1;
+ (id)stringFromAccessType:(unsigned char)arg1;
+ (bool)supportsSecureCoding;

- (id)consumeToken;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (const char *)extensionClass;
- (id)initWithCoder:(id)arg1;
- (id)initWithFilePath:(id)arg1 accessType:(unsigned char)arg2;
- (bool)issueSandboxExtensionForFilePath:(id)arg1;
- (id)serialize;

@end
