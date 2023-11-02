
@interface FCCKPrivateDatabaseServerChangeToken : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _changeTokensByDestinationKey;
}

@property (nonatomic, copy) NSDictionary *changeTokensByDestinationKey;

+ (id)_keyForDestination:(long long)arg1;
+ (bool)supportsSecureCoding;
+ (id)tokenByAddingCKToken:(id)arg1 forDestination:(long long)arg2 toToken:(id)arg3;

- (void).cxx_destruct;
- (id)changeTokenForDestination:(long long)arg1;
- (id)changeTokensByDestinationKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithChangeTokensByDestination:(id)arg1;
- (id)initWithChangeTokensByDestinationKey:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setChangeTokensByDestinationKey:(id)arg1;

@end
