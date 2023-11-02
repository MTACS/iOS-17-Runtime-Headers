
@interface AVAssetSegmentReportSampleInformation : NSObject {
    bool  _isSyncSample;
    long long  _length;
    long long  _offset;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _presentationTimeStamp;
}

@property (nonatomic, readonly) bool isSyncSample;
@property (nonatomic, readonly) long long length;
@property (nonatomic, readonly) long long offset;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } presentationTimeStamp;

- (void)dealloc;
- (id)initWithFigSegmentReportSampleInformationDictionary:(id)arg1;
- (bool)isSyncSample;
- (long long)length;
- (long long)offset;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })presentationTimeStamp;

@end
