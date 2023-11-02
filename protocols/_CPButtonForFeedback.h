
@protocol _CPButtonForFeedback <NSObject>

@required

- (NSString *)commandDetail;
- (int)commandType;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setCommandDetail:(NSString *)arg1;
- (void)setCommandType:(int)arg1;
- (void)setUniqueId:(unsigned long long)arg1;
- (unsigned long long)uniqueId;

@end
