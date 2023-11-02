
@protocol _CPSearchViewDisappearFeedback <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setViewDisappearEvent:(int)arg1;
- (unsigned long long)timestamp;
- (int)viewDisappearEvent;

@end
