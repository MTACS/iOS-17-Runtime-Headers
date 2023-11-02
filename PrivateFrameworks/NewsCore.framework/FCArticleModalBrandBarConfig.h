
@interface FCArticleModalBrandBarConfig : NSObject {
    int  _campaignVersion;
    NSString * _ctaTitle;
    NSString * _ctaUrl;
    bool  _enabled;
    int  _maxCount;
    NSString * _messageBody;
    NSString * _messageTitle;
    long long  _quiescenceInterval;
}

@property (nonatomic, readonly) int campaignVersion;
@property (nonatomic, readonly) NSString *ctaTitle;
@property (nonatomic, readonly) NSString *ctaUrl;
@property (nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) int maxCount;
@property (nonatomic, readonly) NSString *messageBody;
@property (nonatomic, readonly) NSString *messageTitle;
@property (nonatomic, readonly) long long quiescenceInterval;

- (void).cxx_destruct;
- (int)campaignVersion;
- (id)ctaTitle;
- (id)ctaUrl;
- (bool)enabled;
- (id)initWithConfigDictionary:(id)arg1;
- (int)maxCount;
- (id)messageBody;
- (id)messageTitle;
- (long long)quiescenceInterval;

@end
