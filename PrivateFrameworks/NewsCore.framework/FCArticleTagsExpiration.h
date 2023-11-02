
@interface FCArticleTagsExpiration : NSObject {
    NSDate * _expireTime;
    NSString * _tagID;
}

@property (nonatomic, readonly) NSDate *expireTime;
@property (nonatomic, readonly) NSString *tagID;

+ (id)tagsExpirationsFromRecord:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)expireTime;
- (id)initWithTagsExpiration:(id)arg1;
- (id)tagID;

@end
