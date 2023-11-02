
@interface DocumentUnderstanding.DUUserInterfaceUnderstandingResult : NSObject <NSCoding, NSCopying> {
    void topicConfidence;
    void topicIdentifier;
}

@property (nonatomic) double topicConfidence;
@property (nonatomic, copy) NSString *topicIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(void*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setTopicConfidence:(double)arg1;
- (void)setTopicIdentifier:(id)arg1;
- (double)topicConfidence;
- (id)topicIdentifier;

@end
