
@interface HMManagedConfigurationProfileInfo : HMFObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    NSData * _profileData;
}

@property (readonly, copy) NSString *identifier;
@property (readonly) NSData *profileData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 profileData:(id)arg2;
- (id)profileData;

@end
