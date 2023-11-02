
@protocol HDSPTimeChangeObserver <NSObject>

@optional

- (void)significantTimeChangeDetected:(HDSPTimeChangeListener *)arg1;
- (void)timeZoneChangeDetected:(HDSPTimeChangeListener *)arg1;

@end
