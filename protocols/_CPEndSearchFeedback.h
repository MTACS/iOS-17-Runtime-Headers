
@protocol _CPEndSearchFeedback <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUuid:(NSString *)arg1;
- (unsigned long long)timestamp;
- (NSString *)uuid;

@end
