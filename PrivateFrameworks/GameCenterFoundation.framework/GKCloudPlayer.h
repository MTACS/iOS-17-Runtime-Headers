
@interface GKCloudPlayer : GKBasePlayer <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    NSString * _name;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *name;

+ (void)getCurrentSignedInPlayerForContainer:(id)arg1 completionHandler:(id /* block */)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)playerID;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;

@end
