
@interface AVMomentCaptureMovieRecordingResolvedSettings : NSObject {
    struct { 
        int width; 
        int height; 
    }  _movieDimensions;
    NSURL * _movieURL;
    NSURL * _spatialOverCaptureURL;
    bool  _torchEnabled;
    long long  _uniqueID;
}

@property (readonly) struct { int x1; int x2; } movieDimensions;
@property (readonly) NSURL *movieURL;
@property (readonly) NSURL *spatialOverCaptureURL;
@property (getter=isTorchEnabled, readonly) bool torchEnabled;
@property (readonly) long long uniqueID;

+ (id)movieRecordingResolvedSettingsWithUniqueID:(long long)arg1 torchEnabled:(bool)arg2 movieURL:(id)arg3 spatialOverCaptureURL:(id)arg4 movieDimensions:(struct { int x1; int x2; })arg5;

- (id)_initWithUniqueID:(long long)arg1 torchEnabled:(bool)arg2 movieURL:(id)arg3 spatialOverCaptureURL:(id)arg4 movieDimensions:(struct { int x1; int x2; })arg5;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (bool)isTorchEnabled;
- (struct { int x1; int x2; })movieDimensions;
- (id)movieURL;
- (id)spatialOverCaptureURL;
- (long long)uniqueID;

@end
