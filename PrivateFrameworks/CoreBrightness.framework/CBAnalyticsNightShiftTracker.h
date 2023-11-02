
@interface CBAnalyticsNightShiftTracker : NSObject {
    bool  _isEnabled;
    double  _modeChangeTimestamp;
}

- (id)init;
- (bool)isStarted;
- (void)start:(bool)arg1;
- (void)stop:(int)arg1 isEnabled:(bool)arg2;
- (void)update:(int)arg1 isEnabled:(bool)arg2;

@end
