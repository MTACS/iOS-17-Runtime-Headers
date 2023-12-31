
@protocol _CPLookupHintRelevancyFeedback <NSObject>

@required

- (NSString *)context;
- (bool)discarded;
- (NSString *)domain;
- (int)grade;
- (_CPRange *)hintRange;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setContext:(NSString *)arg1;
- (void)setDiscarded:(bool)arg1;
- (void)setDomain:(NSString *)arg1;
- (void)setGrade:(int)arg1;
- (void)setHintRange:(_CPRange *)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;

@end
