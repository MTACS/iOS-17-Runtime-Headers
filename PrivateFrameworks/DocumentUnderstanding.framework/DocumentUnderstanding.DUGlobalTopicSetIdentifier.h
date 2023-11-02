
@interface DocumentUnderstanding.DUGlobalTopicSetIdentifier : NSObject <NSCoding, NSCopying> {
    void topicSetName;
    void topicSetVersion;
}

@property (nonatomic) long long topicSetName;
@property (nonatomic) long long topicSetVersion;

- (id)copyWithZone:(void*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setTopicSetName:(long long)arg1;
- (void)setTopicSetVersion:(long long)arg1;
- (long long)topicSetName;
- (long long)topicSetVersion;

@end
