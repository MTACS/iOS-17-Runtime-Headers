
@interface AVMutableVideoCompositionInstruction : AVVideoCompositionInstruction {
    AVMutableVideoCompositionInstructionInternal * _mutableInstruction;
}

@property (nonatomic, retain) struct CGColor { }*backgroundColor;
@property (nonatomic) bool enablePostProcessing;
@property (nonatomic, copy) NSArray *layerInstructions;
@property (nonatomic, copy) NSArray *requiredSourceSampleDataTrackIDs;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;

+ (id)videoCompositionInstruction;

- (struct CGColor { }*)backgroundColor;
- (bool)enablePostProcessing;
- (id)layerInstructions;
- (id)requiredSourceSampleDataTrackIDs;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (void)setEnablePostProcessing:(bool)arg1;
- (void)setLayerInstructions:(id)arg1;
- (void)setRequiredSourceSampleDataTrackIDs:(id)arg1;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;

@end
