
@interface IPAVideoAdjustmentStackSerializer_v10 : IPAVideoAdjustmentStackSerializer

- (id)archiveFromData:(id)arg1 error:(id*)arg2;
- (id)dataFromArchive:(id)arg1 error:(id*)arg2;
- (id)dataFromVideoAdjustmentStack:(id)arg1 error:(id*)arg2;
- (id)videoAdjustmentFromArchive:(id)arg1 error:(id*)arg2;
- (id)videoAdjustmentStackFromData:(id)arg1 error:(id*)arg2;

@end
