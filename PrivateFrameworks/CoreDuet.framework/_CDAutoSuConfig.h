
@interface _CDAutoSuConfig : NSObject {
    bool  _allowUnlockBeforeNow;
    bool  _alwaysFallBackToDefault;
    bool  _alwaysReturnUnlockNow;
    double  _endThreshold;
    int  _restrictionEndInSlot;
    int  _restrictionStartInSlot;
    double  _startThreshold;
    int  _suEndDefaultTimeOffsetFromSuStart;
    int  _suStartDefaultTime;
    int  _unlockMarginInSlot;
    double  _unlockThreshold;
}

@property (nonatomic) bool allowUnlockBeforeNow;
@property (nonatomic) bool alwaysFallBackToDefault;
@property (nonatomic) bool alwaysReturnUnlockNow;
@property (nonatomic) double endThreshold;
@property (nonatomic) int restrictionEndInSlot;
@property (nonatomic) int restrictionStartInSlot;
@property (nonatomic) double startThreshold;
@property (nonatomic) int suEndDefaultTimeOffsetFromSuStart;
@property (nonatomic) int suStartDefaultTime;
@property (nonatomic) int unlockMarginInSlot;
@property (nonatomic) double unlockThreshold;

- (bool)allowUnlockBeforeNow;
- (bool)alwaysFallBackToDefault;
- (bool)alwaysReturnUnlockNow;
- (double)endThreshold;
- (int)readConfig;
- (int)restrictionEndInSlot;
- (int)restrictionStartInSlot;
- (void)setAllowUnlockBeforeNow:(bool)arg1;
- (void)setAlwaysFallBackToDefault:(bool)arg1;
- (void)setAlwaysReturnUnlockNow:(bool)arg1;
- (void)setEndThreshold:(double)arg1;
- (void)setParam;
- (void)setRestrictionEndInSlot:(int)arg1;
- (void)setRestrictionStartInSlot:(int)arg1;
- (void)setStartThreshold:(double)arg1;
- (void)setSuEndDefaultTimeOffsetFromSuStart:(int)arg1;
- (void)setSuStartDefaultTime:(int)arg1;
- (void)setUnlockMarginInSlot:(int)arg1;
- (void)setUnlockThreshold:(double)arg1;
- (double)startThreshold;
- (int)suEndDefaultTimeOffsetFromSuStart;
- (int)suStartDefaultTime;
- (int)unlockMarginInSlot;
- (double)unlockThreshold;
- (bool)validParam;

@end