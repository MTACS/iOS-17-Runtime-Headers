
@interface IPAPhotoAdjustmentStackSerializer_v10 : IPAPhotoAdjustmentStackSerializer

- (id)archiveFromData:(id)arg1 error:(id*)arg2;
- (id)dataFromArchive:(id)arg1 error:(id*)arg2;
- (id)dataFromPhotoAdjustmentStack:(id)arg1 error:(id*)arg2;
- (id)photoAdjustmentFromArchive:(id)arg1 error:(id*)arg2;
- (id)photoAdjustmentStackFromData:(id)arg1 error:(id*)arg2;

@end
