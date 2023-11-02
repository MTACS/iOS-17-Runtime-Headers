
@protocol CLSNSFWProcessedSignals

@required

- (bool)isNSFWExplicit;
- (bool)isPreciselyNSFWExplicit;
- (bool)isRecallinglyNSFWExplicit;
- (void)setIsNSFWExplicit:(bool)arg1;
- (void)setIsPreciselyNSFWExplicit:(bool)arg1;
- (void)setIsRecallinglyNSFWExplicit:(bool)arg1;

@end
