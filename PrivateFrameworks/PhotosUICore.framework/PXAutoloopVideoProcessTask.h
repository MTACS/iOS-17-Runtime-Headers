
@interface PXAutoloopVideoProcessTask : PXAutoloopVideoTask {
    bool  _shouldExtractGateFeatures;
}

@property (nonatomic) bool shouldExtractGateFeatures;

- (void)performTaskWithInput:(id)arg1;
- (void)setShouldExtractGateFeatures:(bool)arg1;
- (bool)shouldExtractGateFeatures;

@end
