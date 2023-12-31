
@interface ICMusicSubscriptionStatusTerms : NSObject <NSCopying, NSSecureCoding> {
    long long  _acceptedVersion;
    long long  _currentVersion;
    long long  _sourceType;
    long long  _type;
}

@property (nonatomic, readonly) long long acceptedVersion;
@property (nonatomic, readonly) long long currentVersion;
@property (nonatomic, readonly) long long sourceType;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (long long)acceptedVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)currentVersion;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponseTermsDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)sourceType;
- (long long)type;

@end
