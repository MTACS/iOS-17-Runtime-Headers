
@protocol _CPPerformEntityQueryCommandForFeedback <NSObject>

@required

- (int)entityType;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setEntityType:(int)arg1;
- (void)setTokenString:(NSString *)arg1;
- (NSString *)tokenString;

@end
