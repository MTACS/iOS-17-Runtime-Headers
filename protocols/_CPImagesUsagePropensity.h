
@protocol _CPImagesUsagePropensity <NSObject>

@required

- (float)image;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (float)other;
- (float)querySuggestion;
- (float)recentResult;
- (void)setImage:(float)arg1;
- (void)setOther:(float)arg1;
- (void)setQuerySuggestion:(float)arg1;
- (void)setRecentResult:(float)arg1;
- (void)setTotalEngagements:(int)arg1;
- (void)setZkw:(float)arg1;
- (int)totalEngagements;
- (float)zkw;

@end
