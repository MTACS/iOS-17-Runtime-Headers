
@interface TPSAnalyticsEventHLPContentViewed : TPSAnalyticsEvent {
    NSString * _externalURLString;
    NSString * _fromTopicID;
    NSString * _interfaceStyle;
    NSString * _source;
    NSString * _topicID;
    NSString * _topicTitle;
}

@property (nonatomic, readonly) NSString *externalURLString;
@property (nonatomic, readonly) NSString *fromTopicID;
@property (nonatomic, readonly) NSString *interfaceStyle;
@property (nonatomic, readonly) NSString *source;
@property (nonatomic, readonly) NSString *topicID;
@property (nonatomic, readonly) NSString *topicTitle;

+ (id)eventWithTopicID:(id)arg1 topicTitle:(id)arg2 source:(id)arg3 interfaceStyle:(id)arg4 fromTopicID:(id)arg5 externalURLString:(id)arg6;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithTopicID:(id)arg1 topicTitle:(id)arg2 source:(id)arg3 interfaceStyle:(id)arg4 fromTopicID:(id)arg5 externalURLString:(id)arg6;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)externalURLString;
- (id)fromTopicID;
- (id)initWithCoder:(id)arg1;
- (id)interfaceStyle;
- (id)mutableAnalyticsEventRepresentation;
- (id)source;
- (id)topicID;
- (id)topicTitle;

@end
