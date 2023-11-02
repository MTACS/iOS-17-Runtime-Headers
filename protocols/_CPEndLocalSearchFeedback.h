
@protocol _CPEndLocalSearchFeedback <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_CPQueryUnderstandingParse *)quParse;
- (void)setQuParse:(_CPQueryUnderstandingParse *)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUuid:(NSString *)arg1;
- (unsigned long long)timestamp;
- (NSString *)uuid;

@end
