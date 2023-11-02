
@interface DUTopicResultObjC : NSObject {
    _TtC21DocumentUnderstanding13DUTopicResult * _underlying;
}

@property (nonatomic) double topicConfidence;
@property (nonatomic, copy) NSString *topicIdentifier;
@property (nonatomic, copy) NSArray *topicNames;
@property (nonatomic, copy) DUGlobalTopicSetIdentifierObjC *topicSet;

- (void).cxx_destruct;
- (id)init;
- (void)setTopicConfidence:(double)arg1;
- (void)setTopicIdentifier:(id)arg1;
- (void)setTopicNames:(id)arg1;
- (void)setTopicSet:(id)arg1;
- (double)topicConfidence;
- (id)topicIdentifier;
- (id)topicNames;
- (id)topicSet;

@end
