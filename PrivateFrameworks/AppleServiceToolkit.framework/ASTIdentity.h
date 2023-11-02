
@interface ASTIdentity : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _aliases;
    NSString * _hostAppBuild;
    NSString * _hostAppVersion;
    NSArray * _json;
}

@property (nonatomic, retain) NSArray *aliases;
@property (nonatomic, retain) NSString *hostAppBuild;
@property (nonatomic, retain) NSString *hostAppVersion;
@property (nonatomic, retain) NSArray *json;

+ (id)identityWithIdentityAliases:(id)arg1;
+ (id)identityWithSerialNumber:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionariesFromIdentityAliases:(id)arg1;
- (id)aliases;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)hostAppBuild;
- (id)hostAppVersion;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentityAliases:(id)arg1;
- (id)json;
- (void)setAliases:(id)arg1;
- (void)setHostAppBuild:(id)arg1;
- (void)setHostAppVersion:(id)arg1;
- (void)setJson:(id)arg1;
- (id)userAgent;

@end
