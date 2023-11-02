
@interface DocumentUnderstanding.DUTopicResult : NSObject <NSCoding, NSCopying> {
    void topicConfidence;
    void topicIdentifier;
    void topicNames;
    void topicSet;
}

@property (nonatomic) double topicConfidence;
@property (nonatomic, copy) NSString *topicIdentifier;
@property (nonatomic, copy) NSArray *topicNames;
@property (nonatomic, retain) _TtC21DocumentUnderstanding26DUGlobalTopicSetIdentifier *topicSet;

- (void).cxx_destruct;
- (id)copyWithZone:(void*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setTopicConfidence:(double)arg1;
- (void)setTopicIdentifier:(id)arg1;
- (void)setTopicNames:(id)arg1;
- (void)setTopicSet:(id)arg1;
- (double)topicConfidence;
- (id)topicIdentifier;
- (id)topicNames;
- (id)topicSet;

@end
