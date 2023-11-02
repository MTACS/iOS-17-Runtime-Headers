
@interface PRGetPowerStatsResponse : NSObject <NSCopying, NSSecureCoding> {
    unsigned int  _deepSleepDuration;
    unsigned int  _dspProcessingDuration;
    unsigned int  _dualAntennaSearchDuration;
    unsigned int  _dualChainRxPacketDuration;
    unsigned short  _numPacketsReceived;
    unsigned short  _numPacketsTransmitted;
    unsigned int  _pmgrDeepSleepCount;
    unsigned int  _pmgrSleepCount;
    unsigned int  _singleAntennaSearchDuration;
    unsigned int  _singleChainRxPacketDuration;
    unsigned int  _sleepCount;
    unsigned int  _sleepDuration;
    unsigned int  _tripleChainRxPacketDuration;
    unsigned int  _txDuration;
    unsigned int  _wakeCount;
    unsigned int  _wakeDuration;
}

@property (nonatomic, readonly) unsigned int deepSleepDuration;
@property (nonatomic, readonly) unsigned int dspProcessingDuration;
@property (nonatomic, readonly) unsigned int dualAntennaSearchDuration;
@property (nonatomic, readonly) unsigned int dualChainRxPacketDuration;
@property (nonatomic, readonly) unsigned short numPacketsReceived;
@property (nonatomic, readonly) unsigned short numPacketsTransmitted;
@property (nonatomic, readonly) unsigned int pmgrDeepSleepCount;
@property (nonatomic, readonly) unsigned int pmgrSleepCount;
@property (nonatomic, readonly) unsigned int singleAntennaSearchDuration;
@property (nonatomic, readonly) unsigned int singleChainRxPacketDuration;
@property (nonatomic, readonly) unsigned int sleepCount;
@property (nonatomic, readonly) unsigned int sleepDuration;
@property (nonatomic, readonly) unsigned int tripleChainRxPacketDuration;
@property (nonatomic, readonly) unsigned int txDuration;
@property (nonatomic, readonly) unsigned int wakeCount;
@property (nonatomic, readonly) unsigned int wakeDuration;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)deepSleepDuration;
- (id)description;
- (unsigned int)dspProcessingDuration;
- (unsigned int)dualAntennaSearchDuration;
- (unsigned int)dualChainRxPacketDuration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGetPowerStatsResponse:(const struct PowerStatsResponse { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned short x10; unsigned short x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; }*)arg1;
- (id)initWithSleepDuration:(unsigned int)arg1 wakeDuration:(unsigned int)arg2 singleAntennaSearchDuration:(unsigned int)arg3 dualAntennaSearchDuration:(unsigned int)arg4 singleChainRxPacketDuration:(unsigned int)arg5 dualChainRxPacketDuration:(unsigned int)arg6 tripleChainRxPacketDuration:(unsigned int)arg7 dspProcessingDuration:(unsigned int)arg8 txDuration:(unsigned int)arg9 numPacketsReceived:(unsigned short)arg10 numPacketsTransmitted:(unsigned short)arg11 sleepCount:(unsigned int)arg12 wakeCount:(unsigned int)arg13 pmgrSleepCount:(unsigned int)arg14 pmgrDeepSleepCount:(unsigned int)arg15 deepSleepDuration:(unsigned int)arg16;
- (bool)isEqual:(id)arg1;
- (unsigned short)numPacketsReceived;
- (unsigned short)numPacketsTransmitted;
- (unsigned int)pmgrDeepSleepCount;
- (unsigned int)pmgrSleepCount;
- (unsigned int)singleAntennaSearchDuration;
- (unsigned int)singleChainRxPacketDuration;
- (unsigned int)sleepCount;
- (unsigned int)sleepDuration;
- (unsigned int)tripleChainRxPacketDuration;
- (unsigned int)txDuration;
- (unsigned int)wakeCount;
- (unsigned int)wakeDuration;

@end
