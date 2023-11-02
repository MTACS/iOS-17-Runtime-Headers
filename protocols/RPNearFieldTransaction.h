
@protocol RPNearFieldTransaction <NSObject>

@required

- (NSDate *)connectionDate;
- (NSError *)error;
- (NSUUID *)identifier;
- (bool)isInitiator;
- (long long)state;
- (RPNearFieldTapEvent *)tapEvent;

@end
