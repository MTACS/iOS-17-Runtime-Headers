
@interface IPAVideoAdjustmentStackSerializer : IPAAdjustmentStackSerializer

- (id)_adjustmentStackFromData:(id)arg1 error:(id*)arg2;
- (id)_dataFromAdjustmentStack:(id)arg1 error:(id*)arg2;
- (id)dataFromVideoAdjustmentStack:(id)arg1 error:(id*)arg2;
- (id)videoAdjustmentStackFromData:(id)arg1 error:(id*)arg2;

@end
