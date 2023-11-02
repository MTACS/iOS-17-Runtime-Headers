
@interface UNNotificationSource : NSObject <NSCopying, NSSecureCoding> {
    NSString * _displayName;
    UNNotificationIcon * _icon;
    bool  _isHiddenFromSettings;
    NSString * _sourceIdentifier;
    UNNotificationSourceSettings * _sourceSettings;
}

@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) UNNotificationIcon *icon;
@property (nonatomic, readonly) bool isHiddenFromSettings;
@property (nonatomic, readonly, copy) NSString *sourceIdentifier;
@property (nonatomic, readonly, copy) UNNotificationSourceSettings *sourceSettings;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)icon;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 isHidden:(bool)arg2 displayName:(id)arg3 icon:(id)arg4 settings:(id)arg5;
- (bool)isHiddenFromSettings;
- (id)sourceIdentifier;
- (id)sourceSettings;

@end
