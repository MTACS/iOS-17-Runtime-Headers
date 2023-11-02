
@interface FCSpotlightOperationResult : NSObject {
    NSString * _channelID;
    NSString * _ctaText;
    NSString * _eyebrowTitle;
    <FCHeadlineProviding> * _headline;
    NSDate * _publishDate;
    <FCCardStyleProviding> * _spotlightItemDarkStyle;
    <FCCardStyleProviding> * _spotlightItemStyle;
    NSString * _subTitleText;
    FCColor * _titleColor;
    NSString * _titleText;
}

@property (nonatomic, readonly, copy) NSString *channelID;
@property (nonatomic, readonly, copy) NSString *ctaText;
@property (nonatomic, readonly, copy) NSString *eyebrowTitle;
@property (nonatomic, readonly) <FCHeadlineProviding> *headline;
@property (nonatomic, readonly, copy) NSDate *publishDate;
@property (nonatomic, readonly, copy) <FCCardStyleProviding> *spotlightItemDarkStyle;
@property (nonatomic, readonly, copy) <FCCardStyleProviding> *spotlightItemStyle;
@property (nonatomic, readonly, copy) NSString *subTitleText;
@property (nonatomic, readonly, copy) FCColor *titleColor;
@property (nonatomic, readonly, copy) NSString *titleText;

- (void).cxx_destruct;
- (id)channelID;
- (id)ctaText;
- (id)eyebrowTitle;
- (id)headline;
- (id)initWithSpotlightGroupConfig:(id)arg1 headline:(id)arg2;
- (id)publishDate;
- (id)spotlightItemDarkStyle;
- (id)spotlightItemStyle;
- (id)subTitleText;
- (id)titleColor;
- (id)titleText;

@end
