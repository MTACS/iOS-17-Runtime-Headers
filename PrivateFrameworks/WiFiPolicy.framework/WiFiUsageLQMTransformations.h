
@interface WiFiUsageLQMTransformations : NSObject

+ (unsigned long long)byteScale;
+ (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })ccaStatsWithDuration:(unsigned long long)arg1 ccaSelf:(unsigned long long)arg2 ccaOther:(unsigned long long)arg3 interference:(unsigned long long)arg4;
+ (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; })ctrlFrmsPercentagesWithRxCtrlUcast:(unsigned long long)arg1 RTS:(unsigned long long)arg2 CTS:(unsigned long long)arg3 BACK:(unsigned long long)arg4 ACK:(unsigned long long)arg5;
+ (id)dateWithMachContinuousTime:(unsigned long long)arg1 WithRef:(id)arg2 asNS:(unsigned long long)arg3;
+ (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })decodingAttemptsWithRxCrsGlitch:(unsigned long long)arg1 rxBadPLCP:(unsigned long long)arg2 RxBphyCrsGlitch:(unsigned long long)arg3 rxBphyBadPLCP:(unsigned long long)arg4 rxStart:(unsigned long long)arg5;
+ (id)getBinBytesPerFrame:(unsigned long long)arg1 As:(unsigned long long)arg2;
+ (id)getBinBytesPerPacket:(unsigned long long)arg1 As:(unsigned long long)arg2;
+ (id)getBinDecodingAttempts:(unsigned long long)arg1 As:(unsigned long long)arg2;
+ (id)getBinDesense:(unsigned long long)arg1 As:(unsigned long long)arg2;
+ (id)getBinEvery10thOverRatioScale:(unsigned long long)arg1 As:(unsigned long long)arg2;
+ (id)getBinForDouble:(double)arg1 In:(id)arg2 WithLowestEdge:(id)arg3 As:(unsigned long long)arg4;
+ (id)getBinForRoamingLatency:(unsigned long long)arg1 As:(unsigned long long)arg2;
+ (id)getBinFrames:(unsigned long long)arg1 As:(unsigned long long)arg2;
+ (id)getBinMpduDensity:(unsigned long long)arg1 As:(unsigned long long)arg2;
+ (id)getBinNetworkQualityResponsiveness:(unsigned long long)arg1 As:(unsigned long long)arg2;
+ (id)getBinNoise:(unsigned long long)arg1 As:(unsigned long long)arg2;
+ (id)getBinQueuedAmpdu:(unsigned long long)arg1 As:(unsigned long long)arg2;
+ (id)getBinRTT:(unsigned long long)arg1 As:(unsigned long long)arg2;
+ (id)getBinRetries:(unsigned long long)arg1 As:(unsigned long long)arg2;
+ (id)getBinRssi:(long long)arg1 As:(unsigned long long)arg2;
+ (id)getBinScannedChannels:(unsigned long long)arg1 As:(unsigned long long)arg2;
+ (id)getBinSnr:(unsigned long long)arg1 As:(unsigned long long)arg2;
+ (id)getBinThroughput:(unsigned long long)arg1 As:(unsigned long long)arg2;
+ (id)getBinTimeIntervalUpTo12h:(double)arg1 As:(unsigned long long)arg2;
+ (id)getBinTimeIntervalUpTo60s:(double)arg1 As:(unsigned long long)arg2;
+ (id)getLabelPingPongStats:(id)arg1;
+ (id)getLabelTrafficState:(unsigned long long)arg1;
+ (unsigned long long)getMaxPhyrateWithNss:(unsigned long long)arg1 Bw:(unsigned long long)arg2 Phy:(unsigned long long)arg3;
+ (void)initialize;
+ (unsigned long long)mpduDensityScale;
+ (id)numberForKeyPath:(id)arg1 ofObject:(id)arg2;
+ (id)ofdmDesenseReason:(unsigned long long)arg1;
+ (unsigned long long)rateFromRatePercentage:(long long)arg1 linkMaxRate:(unsigned long long)arg2;
+ (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; })ratePercentagesWithTxRate:(unsigned long long)arg1 rxRate:(unsigned long long)arg2 txFallbackRate:(unsigned long long)arg3 txFrames:(unsigned long long)arg4 rxFrames:(unsigned long long)arg5 nss:(unsigned long long)arg6 bw:(unsigned long long)arg7 phyMode:(unsigned long long)arg8 band:(int)arg9 deviceMaxRate:(long long)arg10;
+ (unsigned long long)ratioScale;
+ (unsigned long long)ratioWithValue:(unsigned long long)arg1 Over:(unsigned long long)arg2 WithScale:(unsigned long long)arg3;
+ (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; })rxDecodingErrorsPercentagesWithRxFrmTooLong:(unsigned long long)arg1 rxFrmTooShrt:(unsigned long long)arg2 rxBadFCS:(unsigned long long)arg3 rxResponseTimeout:(unsigned long long)arg4 rxNoDelim:(unsigned long long)arg5 rxAnyErr:(unsigned long long)arg6 rxFifo0Ovfl:(unsigned long long)arg7 rxFifo1Ovfl:(unsigned long long)arg8;
+ (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })rxUcastPercentagesWithRxData:(unsigned long long)arg1 rxMgmt:(unsigned long long)arg2 rxCtrl:(unsigned long long)arg3;
+ (id)scanClient:(unsigned long long)arg1;
+ (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; })txErrorsPercentagesWithtxSuccess:(unsigned long long)arg1 txDropped:(unsigned long long)arg2 txNoBuff:(unsigned long long)arg3 txNoRes:(unsigned long long)arg4 txNoAck:(unsigned long long)arg5 txChipModeErr:(unsigned long long)arg6 txExpired:(unsigned long long)arg7 txFail:(unsigned long long)arg8 txFwFree:(unsigned long long)arg9 txMaxRetries:(unsigned long long)arg10 txForceExpire:(unsigned long long)arg11;
+ (void)updateConfig;

@end
