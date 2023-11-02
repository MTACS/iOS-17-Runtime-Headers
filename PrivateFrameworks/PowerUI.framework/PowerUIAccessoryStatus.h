
@interface PowerUIAccessoryStatus : NSObject {
    unsigned char  _chargingEventsSinceLastReport;
    unsigned long long  _currentState;
    NSDate * _disabledUntilDate;
    bool  _enabled;
    NSUUID * _expectedHash;
    NSDate * _lastSeenDate;
    NSDate * _lastSentDate;
    NSDate * _lastTimeseriesDate;
    NSDate * _lastUnderchargeRecordedForPrediction;
    unsigned long long  _managerState;
    unsigned short  _minutesSavedSinceLastReport;
    bool  _temporarilyDisabled;
    unsigned char  _underchargesSinceLastReport;
}

@property unsigned char chargingEventsSinceLastReport;
@property unsigned long long currentState;
@property (retain) NSDate *disabledUntilDate;
@property bool enabled;
@property (retain) NSUUID *expectedHash;
@property (retain) NSDate *lastSeenDate;
@property (retain) NSDate *lastSentDate;
@property (retain) NSDate *lastTimeseriesDate;
@property (retain) NSDate *lastUnderchargeRecordedForPrediction;
@property unsigned long long managerState;
@property unsigned short minutesSavedSinceLastReport;
@property bool temporarilyDisabled;
@property unsigned char underchargesSinceLastReport;

- (void).cxx_destruct;
- (unsigned char)chargingEventsSinceLastReport;
- (unsigned long long)currentState;
- (id)description;
- (id)disabledUntilDate;
- (bool)enabled;
- (id)expectedHash;
- (id)init;
- (id)lastSeenDate;
- (id)lastSentDate;
- (id)lastTimeseriesDate;
- (id)lastUnderchargeRecordedForPrediction;
- (unsigned long long)managerState;
- (unsigned short)minutesSavedSinceLastReport;
- (void)setChargingEventsSinceLastReport:(unsigned char)arg1;
- (void)setCurrentState:(unsigned long long)arg1;
- (void)setDisabledUntilDate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setExpectedHash:(id)arg1;
- (void)setLastSeenDate:(id)arg1;
- (void)setLastSentDate:(id)arg1;
- (void)setLastTimeseriesDate:(id)arg1;
- (void)setLastUnderchargeRecordedForPrediction:(id)arg1;
- (void)setManagerState:(unsigned long long)arg1;
- (void)setMinutesSavedSinceLastReport:(unsigned short)arg1;
- (void)setTemporarilyDisabled:(bool)arg1;
- (void)setUnderchargesSinceLastReport:(unsigned char)arg1;
- (bool)temporarilyDisabled;
- (unsigned char)underchargesSinceLastReport;

@end
