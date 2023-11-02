
@interface NTLocalNewsPromotionTransformation : NSObject <NTFeedTransforming> {
    <NTFeedTransforming> * _baseTransformation;
    NSString * _localNewsPromotedArticleID;
    unsigned long long  _localNewsPromotionIndex;
}

@property (nonatomic, readonly) <NTFeedTransforming> *baseTransformation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *localNewsPromotedArticleID;
@property (nonatomic, readonly) unsigned long long localNewsPromotionIndex;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)baseTransformation;
- (id)init;
- (id)initWithLocalNewsPromotedArticleID:(id)arg1 localNewsPromotionIndex:(unsigned long long)arg2 baseTransformation:(id)arg3;
- (id)localNewsPromotedArticleID;
- (unsigned long long)localNewsPromotionIndex;
- (id)transformFeedItems:(id)arg1;

@end
