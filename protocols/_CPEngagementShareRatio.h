
@protocol _CPEngagementShareRatio <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setShareOfEngagements:(float)arg1;
- (void)setShareOfInternetEngagements:(float)arg1;
- (float)shareOfEngagements;
- (float)shareOfInternetEngagements;

@end
