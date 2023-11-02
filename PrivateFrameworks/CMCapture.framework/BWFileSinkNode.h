
@interface BWFileSinkNode : BWSinkNode {
    <BWNodeFileWriterStatusDelegate> * _recordingStatusDelegate;
}

@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } lastFileDuration;
@property (nonatomic, readonly) unsigned long long lastFileSize;
@property (nonatomic) <BWNodeFileWriterStatusDelegate> *recordingStatusDelegate;

- (struct { long long x1; int x2; unsigned int x3; long long x4; })lastFileDuration;
- (unsigned long long)lastFileSize;
- (id)recordingStatusDelegate;
- (void)setRecordingStatusDelegate:(id)arg1;

@end
