
@interface GKGameSettingsInternal : GKInternalRepresentation {
    long long  _allowFriendListAccess;
    NSString * _bundleID;
}

@property (nonatomic) long long allowFriendListAccess;
@property (nonatomic, retain) NSString *bundleID;

+ (id)secureCodedPropertyKeys;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)allowFriendListAccess;
- (id)allowFriendListAccessString;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)serverAllowFriendListAccessValue;
- (void)setAllowFriendListAccess:(long long)arg1;
- (void)setBundleID:(id)arg1;

@end
