
@interface HLPAnalyticsEventContentViewed : HLPAnalyticsEvent {
    NSString * _externalURLString;
    NSString * _fromTopicID;
    NSString * _source;
    NSString * _topicID;
    NSString * _topicTitle;
    NSString * _viewMode;
    unsigned long long  _viewNum;
}

@property (nonatomic, retain) NSString *externalURLString;
@property (nonatomic, retain) NSString *fromTopicID;
@property (nonatomic, retain) NSString *source;
@property (nonatomic, retain) NSString *topicID;
@property (nonatomic, retain) NSString *topicTitle;
@property (nonatomic, retain) NSString *viewMode;
@property (nonatomic) unsigned long long viewNum;

+ (id)eventWithTopicID:(id)arg1 topicTitle:(id)arg2 source:(id)arg3 interfaceStyle:(long long)arg4;

- (void).cxx_destruct;
- (id)_initWithTopicID:(id)arg1 topicTitle:(id)arg2 source:(id)arg3 interfaceStyle:(long long)arg4;
- (id)caRepresentation;
- (id)eventName;
- (id)externalURLString;
- (id)fromTopicID;
- (void)log;
- (void)setExternalURLString:(id)arg1;
- (void)setFromTopicID:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setTopicID:(id)arg1;
- (void)setTopicTitle:(id)arg1;
- (void)setViewMode:(id)arg1;
- (void)setViewNum:(unsigned long long)arg1;
- (id)source;
- (id)topicID;
- (id)topicTitle;
- (id)viewMode;
- (unsigned long long)viewNum;

@end
