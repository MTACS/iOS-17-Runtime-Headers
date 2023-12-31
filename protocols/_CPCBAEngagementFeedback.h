
@protocol _CPCBAEngagementFeedback <NSObject>

@required

- (int)cbaType;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (unsigned long long)queryId;
- (void)setCbaType:(int)arg1;
- (void)setQueryId:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUrl:(NSString *)arg1;
- (unsigned long long)timestamp;
- (NSString *)url;

@end
