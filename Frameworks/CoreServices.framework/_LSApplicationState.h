
@interface _LSApplicationState : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleIdentifier;
    unsigned long long  _installType;
    int  _ratingRank;
    unsigned long long  _stateFlags;
}

@property (getter=isAlwaysAvailable, nonatomic, readonly) bool alwaysAvailable;
@property (getter=isBlocked, nonatomic, readonly) bool blocked;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (getter=isDowngraded, nonatomic, readonly) bool downgraded;
@property (nonatomic, readonly) unsigned long long installType;
@property (getter=isInstalled, nonatomic, readonly) bool installed;
@property (getter=isPlaceholder, nonatomic, readonly) bool placeholder;
@property (getter=isRemovedSystemApp, nonatomic, readonly) bool removedSystemApp;
@property (getter=isRestricted, nonatomic, readonly) bool restricted;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addStateFlag:(unsigned long long)arg1;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 stateFlags:(unsigned long long)arg2 ratingRank:(int)arg3 installType:(unsigned long long)arg4;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)installType;
- (bool)isAlwaysAvailable;
- (bool)isBlocked;
- (bool)isDowngraded;
- (bool)isInstalled;
- (bool)isPlaceholder;
- (bool)isRemovedSystemApp;
- (bool)isRestricted;
- (bool)isRestrictedWithStateProvider:(id)arg1;
- (bool)isValid;

@end
