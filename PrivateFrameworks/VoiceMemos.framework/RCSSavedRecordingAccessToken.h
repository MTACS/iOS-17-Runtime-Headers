
@interface RCSSavedRecordingAccessToken : NSObject <NSCoding, NSCopying, NSSecureCoding> {
    long long  _accessIntent;
    NSString * _accessName;
    NSURL * _compositionAVURL;
    bool  _exclusive;
    NSUUID * _identifier;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) long long accessIntent;
@property (nonatomic, readonly, copy) NSString *accessName;
@property (nonatomic, readonly) NSURL *compositionAVURL;
@property (getter=isExclusive, nonatomic, readonly) bool exclusive;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly, copy) NSDictionary *userInfo;

+ (bool)supportsSecureCoding;
+ (id)tokenWithName:(id)arg1 accessIntent:(long long)arg2 compositionAVURL:(id)arg3;

- (void).cxx_destruct;
- (long long)accessIntent;
- (id)accessName;
- (id)compositionAVURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 accessIntent:(long long)arg2 compositionAVURL:(id)arg3 identifier:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isExclusive;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end