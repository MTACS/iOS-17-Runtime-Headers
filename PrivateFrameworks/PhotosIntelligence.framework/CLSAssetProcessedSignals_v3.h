
@interface CLSAssetProcessedSignals_v3 : CLSAssetProcessedSignals_v1 <CLSNSFWProcessedSignals> {
    unsigned int  _isNSFWExplicit;
    unsigned int  _isPreciselyNSFWExplicit;
    unsigned int  _isRecallinglyNSFWExplicit;
}

@property (nonatomic) bool isNSFWExplicit;
@property (nonatomic) bool isPreciselyNSFWExplicit;
@property (nonatomic) bool isRecallinglyNSFWExplicit;

- (bool)isNSFWExplicit;
- (bool)isPreciselyNSFWExplicit;
- (bool)isRecallinglyNSFWExplicit;
- (void)setIsNSFWExplicit:(bool)arg1;
- (void)setIsPreciselyNSFWExplicit:(bool)arg1;
- (void)setIsRecallinglyNSFWExplicit:(bool)arg1;

@end
