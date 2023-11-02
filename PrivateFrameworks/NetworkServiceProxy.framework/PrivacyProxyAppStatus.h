
@interface PrivacyProxyAppStatus : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _activeDate;
    unsigned long long  _appStatus;
    NSString * _bundleIdentifier;
    NSString * _path;
}

@property (retain) NSDate *activeDate;
@property unsigned long long appStatus;
@property (retain) NSString *bundleIdentifier;
@property (retain) NSString *path;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeDate;
- (unsigned long long)appStatus;
- (id)appStatusString;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatus:(unsigned long long)arg1 bundleID:(id)arg2 path:(id)arg3 activeDate:(id)arg4;
- (id)path;
- (void)setActiveDate:(id)arg1;
- (void)setAppStatus:(unsigned long long)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setPath:(id)arg1;

@end
