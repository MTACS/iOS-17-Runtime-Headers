
@interface ASCWebAuthenticationExtensionsClientInputs : NSObject <NSCopying, NSSecureCoding> {
    NSString * _appID;
    bool  _isGoogleLegacyAppIDSupport;
}

@property (nonatomic, copy) NSString *appID;
@property (nonatomic) bool isGoogleLegacyAppIDSupport;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAppID:(id)arg1 isGoogleLegacyAppIDSupport:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isGoogleLegacyAppIDSupport;
- (void)setAppID:(id)arg1;
- (void)setIsGoogleLegacyAppIDSupport:(bool)arg1;

@end
