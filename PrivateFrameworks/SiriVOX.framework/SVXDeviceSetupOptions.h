
@interface SVXDeviceSetupOptions : NSObject <NSCopying, NSSecureCoding> {
    long long  _gender;
    long long  _hasActiveAccount;
    long long  _isNewsRestricted;
    NSString * _languageCode;
}

@property (nonatomic, readonly) long long gender;
@property (nonatomic, readonly) long long hasActiveAccount;
@property (nonatomic, readonly) long long isNewsRestricted;
@property (nonatomic, readonly, copy) NSString *languageCode;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)gender;
- (long long)hasActiveAccount;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLanguageCode:(id)arg1 gender:(long long)arg2 hasActiveAccount:(long long)arg3 isNewsRestricted:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (long long)isNewsRestricted;
- (id)languageCode;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;

@end
