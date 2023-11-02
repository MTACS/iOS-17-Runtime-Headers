
@protocol MFGaplessParameters

@required

- (unsigned long long)durationInFrames;
- (unsigned int)encodingDelayInFrames;
- (unsigned int)encodingDrainInFrames;
- (unsigned int)heuristicInfo;
- (unsigned long long)lastPacketsResync;

@end
