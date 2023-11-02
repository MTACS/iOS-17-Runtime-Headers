
@interface SHMediaLibraryInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identityToken;
    bool  _isEncrypted;
    long long  _status;
}

@property (nonatomic, copy) NSString *identityToken;
@property (nonatomic, readonly) bool isEncrypted;
@property (nonatomic, readonly) long long status;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)identityToken;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatus:(long long)arg1 encrypted:(bool)arg2;
- (bool)isEncrypted;
- (void)setIdentityToken:(id)arg1;
- (long long)status;

@end
