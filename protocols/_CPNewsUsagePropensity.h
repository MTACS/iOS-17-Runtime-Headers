
@protocol _CPNewsUsagePropensity <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (float)other;
- (void)setOther:(float)arg1;
- (void)setTotalEngagements:(int)arg1;
- (int)totalEngagements;

@end
