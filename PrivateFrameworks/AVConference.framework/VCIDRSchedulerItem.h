
@interface VCIDRSchedulerItem : NSObject {
    unsigned int  _budgetInCaptureFrames;
    unsigned int  _framePosition;
    NSMutableArray * _streams;
    unsigned int  _weightFactor;
}

@property (nonatomic) unsigned int budgetInCaptureFrames;
@property (nonatomic) unsigned int framePosition;
@property (nonatomic, readonly) NSArray *streams;
@property (nonatomic) unsigned int weightFactor;

- (void)addStream:(id)arg1;
- (unsigned int)budgetInCaptureFrames;
- (long long)compareBudget:(id)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)framePosition;
- (id)init;
- (void)setBudgetInCaptureFrames:(unsigned int)arg1;
- (void)setFramePosition:(unsigned int)arg1;
- (void)setWeightFactor:(unsigned int)arg1;
- (id)streams;
- (unsigned int)weightFactor;

@end
