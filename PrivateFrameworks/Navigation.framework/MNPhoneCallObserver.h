
@interface MNPhoneCallObserver : NSObject

+ (id)sharedPhoneCallObserver;

- (bool)hasActiveCalls;

@end
