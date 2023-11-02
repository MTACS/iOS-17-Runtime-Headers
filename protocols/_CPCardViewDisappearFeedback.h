
@protocol _CPCardViewDisappearFeedback <NSObject>

@required

- (_CPCardForFeedback *)card;
- (int)cardDisappearEvent;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setCard:(_CPCardForFeedback *)arg1;
- (void)setCardDisappearEvent:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;

@end
