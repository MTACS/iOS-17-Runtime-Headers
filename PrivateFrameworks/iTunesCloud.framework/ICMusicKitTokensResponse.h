
@interface ICMusicKitTokensResponse : NSObject <NSCopying, NSSecureCoding> {
    NSString * _developerToken;
    NSString * _userToken;
    NSError * _userTokenFetchingError;
}

@property (nonatomic, readonly, copy) NSString *developerToken;
@property (nonatomic, readonly, copy) NSString *userToken;
@property (nonatomic, readonly, copy) NSError *userTokenFetchingError;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionForDebugging:(bool)arg1;
- (id)_descriptionOfToken:(id)arg1 forDebugging:(bool)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)developerToken;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeveloperToken:(id)arg1 userToken:(id)arg2 userTokenFetchingError:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)userToken;
- (id)userTokenFetchingError;

@end
