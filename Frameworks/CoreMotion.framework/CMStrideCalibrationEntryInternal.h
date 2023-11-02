
@interface CMStrideCalibrationEntryInternal : CMStrideCalibrationEntry

@property (nonatomic, readonly) double kvalue;
@property (nonatomic, readonly) double kvalueTrack;
@property (nonatomic, readonly) unsigned int pacebin;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) int session;

- (id)description;
- (double)kvalue;
- (double)kvalueTrack;
- (unsigned int)pacebin;
- (double)score;
- (int)session;

@end
