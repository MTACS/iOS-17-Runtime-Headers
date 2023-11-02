
@interface UNNotificationSourceSettings : NSObject <NSCopying, NSSecureCoding> {
    bool  _isRestricted;
    UNNotificationSettings * _notificationSettings;
    NSArray * _topicSettings;
}

@property (nonatomic, readonly) bool isRestricted;
@property (nonatomic, readonly, copy) UNNotificationSettings *notificationSettings;
@property (nonatomic, readonly, copy) NSArray *topicSettings;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNotificationSettings:(id)arg1 topicSettings:(id)arg2 isRestricted:(bool)arg3;
- (bool)isRestricted;
- (id)notificationSettings;
- (id)topicSettings;

@end
