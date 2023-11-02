
@interface MOVStreamWriterStatePreparing : NSObject <MOVStreamWriterState>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (readonly) Class superclass;
@property (readonly) long long writerStatus;

- (void)activateWithContext:(id)arg1;
- (bool)canAppendData:(id)arg1;
- (bool)canConfigure:(id)arg1;
- (bool)canFinishRecording:(id)arg1;
- (bool)canWriteData:(id)arg1;
- (id)cancelRecording:(id)arg1;
- (id)criticalErrorOccurred:(id)arg1 context:(id)arg2;
- (id)finishRecording:(id)arg1;
- (id)finishedCancelRecording:(id)arg1;
- (id)forceFinishRecording:(id)arg1;
- (id)name;
- (id)nextFinishStep:(id)arg1;
- (id)prepareFinished:(id)arg1;
- (id)prepareRecording:(id)arg1;
- (bool)stopWriterWhenFifosAreEmpty:(id)arg1;
- (long long)writerStatus;

@end
