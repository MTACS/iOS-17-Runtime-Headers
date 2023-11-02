
@interface HMDCameraClipImportMetadata : NSObject {
    NSDate * _startDate;
    double  _targetFragmentDuration;
    NSArray * _videoSegments;
}

@property (readonly) NSDate *startDate;
@property (readonly) double targetFragmentDuration;
@property (readonly) NSArray *videoSegments;

- (void).cxx_destruct;
- (id)initClipData:(id)arg1;
- (id)startDate;
- (double)targetFragmentDuration;
- (id)videoSegments;

@end
