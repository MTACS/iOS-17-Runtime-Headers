
@interface WiFiUsagePrivacyFilter : NSObject

+ (id)bandAsString:(int)arg1;
+ (int)bandFromFlags:(id)arg1 OrChannel:(id)arg2;
+ (bool)canPerformActionWithSampleRate:(unsigned long long)arg1;
+ (id)describeSampleRate:(unsigned long long)arg1;
+ (id)getBinEvery10Over100:(unsigned long long)arg1 As:(unsigned long long)arg2;
+ (id)getBinFor:(long long)arg1 In:(id)arg2 WithLowestEdge:(id)arg3 As:(unsigned long long)arg4;
+ (id)getBinTimeInterval:(double)arg1 As:(unsigned long long)arg2;
+ (id)getHumanSecondsFromObject:(id)arg1;
+ (id)getHumanSecondsFromTimeInterval:(double)arg1;
+ (id)getLabelForBandUsageDuration:(struct { double x1[3]; bool x2[3]; })arg1 overTotalDuration:(double)arg2 binned:(bool)arg3;
+ (id)getLabelForCoreRssiMode:(unsigned long long)arg1;
+ (id)getLabelForIntegerByBand:(struct { long long x1[3]; bool x2[3]; })arg1;
+ (id)getLabelForIntegerByBand:(struct { long long x1[3]; bool x2[3]; })arg1 In:(id)arg2 WithLowestEdge:(id)arg3 As:(unsigned long long)arg4;
+ (id)getLabelForIntegerByBand:(struct { long long x1[3]; bool x2[3]; })arg1 withCap:(bool)arg2;
+ (id)getLabelForIntegerByBandTransition:(struct { long long x1[3][3]; bool x2[3][3]; })arg1 In:(id)arg2 WithLowestEdge:(id)arg3 As:(unsigned long long)arg4;
+ (id)getLabelForNeighborsByBand:(id)arg1;
+ (id)getLabelForPercIntegerByBand:(struct { long long x1[3]; bool x2[3]; })arg1;
+ (id)getLabelForRTCoexType:(unsigned long long)arg1;
+ (id)getLabelForRssiByBand:(struct { long long x1[3]; bool x2[3]; })arg1;
+ (id)getLabelForRssiDeltaByBand:(struct { long long x1[3]; bool x2[3]; })arg1;
+ (id)getLabelForRssiDeltaByBandTransition:(struct { long long x1[3][3]; bool x2[3][3]; })arg1;
+ (id)getLabelForSteeringRequest:(unsigned long long)arg1;
+ (id)getLabelForTDMode:(int)arg1;
+ (id)getLabelForTDTrigger:(int)arg1;
+ (id)getLabelForUsbVendor:(unsigned long long)arg1;
+ (struct { long long x1[3]; bool x2[3]; })getModeCountersByCandidatesByBand:(id)arg1;
+ (struct { long long x1[3]; bool x2[3]; })getPercForFloatByBand:(struct { double x1[3]; bool x2[3]; })arg1 Over:(double)arg2;
+ (struct { long long x1[3]; bool x2[3]; })getPercForIntegerByBand:(struct { long long x1[3]; bool x2[3]; })arg1 Over:(unsigned long long)arg2;
+ (long long)getSumAllBands:(struct { long long x1[3]; bool x2[3]; })arg1;
+ (id)getSumArrayCountAllBand:(id)arg1;
+ (void)initialize;
+ (bool)isInternalInstall;
+ (bool)isLocallyAdministeredBitSetInBSSData:(id)arg1;
+ (bool)isLocallyAdministeredBitSetInBSSString:(id)arg1;
+ (id)localTimestamp:(id)arg1;
+ (id)macAddressData:(id)arg1;
+ (id)numberWithByteCount:(unsigned long long)arg1;
+ (id)numberWithDuration:(double)arg1;
+ (id)numberWithDurationMillisecond:(double)arg1;
+ (id)numberWithFrameCount:(unsigned long long)arg1;
+ (id)numberWithInstances:(unsigned long long)arg1;
+ (id)oui:(id)arg1;
+ (id)reformatMACAddress:(id)arg1;
+ (id)sanitizedOUI:(id)arg1;
+ (id)timePercentage:(double)arg1 overTotalDuration:(double)arg2;
+ (double)timeSinceBootInSeconds;
+ (id)toBinString:(id)arg1;
+ (id)toHEXString:(char *)arg1 length:(unsigned long long)arg2;
+ (id)twoSigFig:(unsigned long long)arg1;

@end
