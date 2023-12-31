
@interface NTHeadlinePersonalizationMetadata : NSObject <NTHeadlinePersonalizationMetadata> {
    NSString * _articleID;
    NSString * _publisherID;
    NSDictionary * _scoredTopicIDs;
}

@property (nonatomic, readonly, copy) NSString *articleID;
@property (nonatomic, readonly, copy) NSString *publisherID;
@property (nonatomic, readonly, copy) NSDictionary *scoredTopicIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)articleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithArticleID:(id)arg1 publisherID:(id)arg2 scoredTopicIDs:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)publisherID;
- (id)scoredTopicIDs;

@end
