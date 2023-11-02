
@protocol _CPEngagementTriggerRatio <NSObject>

@required

- (float)go;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setGo:(float)arg1;
- (void)setTap:(float)arg1;
- (void)setTotalEngagements:(int)arg1;
- (float)tap;
- (int)totalEngagements;

@end
