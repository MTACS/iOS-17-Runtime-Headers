
@protocol MOVStreamWriterStateContext <NSObject>

@required

- (NSError *)criticalError;
- (void)deleteFileOnCancel;
- (void)deleteMOVFile;
- (void)executePrepareToRecordWithMovieMetadata:(NSArray *)arg1;
- (void)finishAVWriter;
- (void)finishAndDrainFifoFirst;
- (NSArray *)movMetadataItems;
- (void)processCancelRecording;
- (void)processFinishRecording;
- (void)processForceFinishRecording;
- (void)setCriticalError:(NSError *)arg1;
- (void)setMovMetadataItems:(NSArray *)arg1;

@end
