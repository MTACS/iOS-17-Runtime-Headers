
@protocol _INPBHangUpCallIntentResponse <NSObject>

@required

- (int)StringAsHungUpCallType:(NSString *)arg1;
- (bool)hasHungUpCallType;
- (int)hungUpCallType;
- (NSString *)hungUpCallTypeAsString:(int)arg1;
- (void)setHasHungUpCallType:(bool)arg1;
- (void)setHungUpCallType:(int)arg1;

@end
