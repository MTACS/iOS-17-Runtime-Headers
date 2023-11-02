
@interface BWNodeError : NSObject {
    int  _errorCode;
    FigCaptureRecordingSettings * _recordingSettings;
    NSString * _sourceNodeDescription;
    BWStillImageSettings * _stillImageSettings;
    long long  _uniqueID;
}

@property (readonly) int errorCode;
@property (readonly) FigCaptureRecordingSettings *recordingSettings;
@property (readonly) NSString *sourceNodeDescription;
@property (readonly) BWStillImageSettings *stillImageSettings;

+ (id)newError:(int)arg1 sourceNode:(id)arg2;
+ (id)newError:(int)arg1 sourceNode:(id)arg2 recordingSettings:(id)arg3;
+ (id)newError:(int)arg1 sourceNode:(id)arg2 stillImageSettings:(id)arg3;

- (void)dealloc;
- (id)description;
- (int)errorCode;
- (unsigned long long)hash;
- (id)recordingSettings;
- (id)sourceNodeDescription;
- (id)stillImageSettings;

@end
