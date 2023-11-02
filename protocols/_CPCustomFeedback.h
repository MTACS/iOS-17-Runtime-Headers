
@protocol _CPCustomFeedback <NSObject>

@required

- (int)feedbackType;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSData *)jsonFeedback;
- (void)setFeedbackType:(int)arg1;
- (void)setJsonFeedback:(NSData *)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;

@end
