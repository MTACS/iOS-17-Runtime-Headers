
@interface FCSpotlightGroupConfig : FCGroupConfig {
    NSDate * _publishDate;
    NSString * _spotlightArticleID;
}

@property (nonatomic, readonly, copy) NSDate *publishDate;
@property (nonatomic, readonly, copy) NSString *spotlightArticleID;
@property (nonatomic, readonly, copy) NSString *spotlightCallToActionTitle;
@property (nonatomic, readonly, copy) NSString *spotlightEyebrowTitle;
@property (nonatomic, readonly, copy) <FCCardStyleProviding> *spotlightItemDarkStyle;
@property (nonatomic, readonly, copy) <FCCardStyleProviding> *spotlightItemStyle;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)publishDate;
- (id)spotlightArticleID;
- (id)spotlightCallToActionTitle;
- (id)spotlightEyebrowTitle;
- (id)spotlightItemDarkStyle;
- (id)spotlightItemStyle;

@end
