
@interface UNNotificationTopicSettings : NSObject <NSCopying, NSSecureCoding> {
    UNNotificationTopic * _topic;
    UNNotificationSettings * _topicSettings;
}

@property (nonatomic, readonly, copy) UNNotificationTopic *topic;
@property (nonatomic, readonly, copy) UNNotificationSettings *topicSettings;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTopic:(id)arg1 settings:(id)arg2;
- (id)topic;
- (id)topicSettings;

@end
