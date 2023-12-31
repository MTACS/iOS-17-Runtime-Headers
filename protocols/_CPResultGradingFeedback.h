
@protocol _CPResultGradingFeedback <NSObject>

@required

- (int)grade;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_CPSearchResultForFeedback *)result;
- (void)setGrade:(int)arg1;
- (void)setResult:(_CPSearchResultForFeedback *)arg1;
- (void)setTextFeedback:(NSString *)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (NSString *)textFeedback;
- (unsigned long long)timestamp;

@end
