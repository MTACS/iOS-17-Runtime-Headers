
@interface CLSAssetProcessedSignals_v4 : CLSAssetProcessedSignals_v3 <CLSIVSNSFWProcessedSignals> {
    unsigned int  _isVeryPreciselyIVSNSFWExplicit;
}

@property (nonatomic) bool isVeryPreciselyIVSNSFWExplicit;

- (bool)isVeryPreciselyIVSNSFWExplicit;
- (void)setIsVeryPreciselyIVSNSFWExplicit:(bool)arg1;

@end
