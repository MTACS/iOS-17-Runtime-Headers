
@interface _UINotificationFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration {
    NSDictionary * _feedbacks;
    bool  _includePrivateEvents;
}

@property (nonatomic, retain) NSDictionary *feedbacks;
@property (nonatomic) bool includePrivateEvents;

+ (id)defaultConfiguration;
+ (id)privateConfiguration;
+ (id)privateConfigurationForTypes:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)defaultEnabled;
- (id)feedbackKeyPaths;
- (id)feedbacks;
- (bool)includePrivateEvents;
- (bool)isEqual:(id)arg1;
- (void)setFeedbacks:(id)arg1;
- (void)setIncludePrivateEvents:(bool)arg1;

@end
