
@interface GDTopicViewTopic : NSObject {
    NSString * _mostRecentDocumentId;
    NSString * _topicIdentifier;
    double  _topicScore;
}

@property (nonatomic, readonly) NSString *mostRecentDocumentId;
@property (nonatomic, readonly) NSString *topicIdentifier;
@property (nonatomic, readonly) double topicScore;

- (void).cxx_destruct;
- (id)initWithTopicIdentifier:(id)arg1 topicScore:(double)arg2 mostRecentDocumentId:(id)arg3;
- (id)mostRecentDocumentId;
- (id)topicIdentifier;
- (double)topicScore;

@end
