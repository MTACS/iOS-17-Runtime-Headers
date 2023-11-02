
@interface FCPublisherTopicFeature : FCPersonalizationFeature {
    NSString * _publisherTagID;
    NSString * _topicTagID;
}

@property (nonatomic, readonly) NSArray *features;
@property (nonatomic, retain) NSString *publisherTagID;
@property (nonatomic, retain) NSString *topicTagID;

- (void).cxx_destruct;
- (id)features;
- (id)init;
- (id)initWithPersonalizationIdentifier:(id)arg1;
- (id)initWithPublisherTagID:(id)arg1 topicTagID:(id)arg2;
- (id)publisherTagID;
- (void)setPublisherTagID:(id)arg1;
- (void)setTopicTagID:(id)arg1;
- (id)topicTagID;

@end
