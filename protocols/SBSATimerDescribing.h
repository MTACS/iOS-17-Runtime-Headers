
@protocol SBSATimerDescribing <NSObject, NSCopying>

@required

- (double)timeInterval;
- (NSUUID *)timerDescriptionIdentifier;

@end
