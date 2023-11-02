
@interface UNNotificationTopicRequest : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _enabledOptions;
    unsigned long long  _supportedOptions;
    UNNotificationTopic * _topic;
}

@property (nonatomic, readonly) unsigned long long enabledOptions;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) unsigned long long supportedOptions;
@property (nonatomic, readonly, copy) UNNotificationTopic *topic;

+ (bool)supportsSecureCoding;
+ (id)topicRequestWithIdentifier:(id)arg1 displayName:(id)arg2 options:(unsigned long long)arg3;
+ (id)topicRequestWithIdentifier:(id)arg1 displayName:(id)arg2 priority:(unsigned long long)arg3 sortIdentifier:(id)arg4 options:(unsigned long long)arg5;
+ (id)topicRequestWithIdentifier:(id)arg1 displayName:(id)arg2 priority:(unsigned long long)arg3 sortIdentifier:(id)arg4 supportedOptions:(unsigned long long)arg5 enabledOptions:(unsigned long long)arg6;

- (void).cxx_destruct;
- (id)_description;
- (id)_initWithIdentifier:(id)arg1 displayName:(id)arg2 priority:(unsigned long long)arg3 sortIdentifier:(id)arg4 supportedOptions:(unsigned long long)arg5 enabledOptions:(unsigned long long)arg6;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)enabledOptions;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)options;
- (unsigned long long)supportedOptions;
- (id)topic;

@end
