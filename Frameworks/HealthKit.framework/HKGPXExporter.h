
@interface HKGPXExporter : NSObject {
    NSURL * _URL;
    NSFileHandle * _fileHandle;
    bool  _isFinished;
    NSISO8601DateFormatter * _isoFormatter;
    HKWorkoutRoute * _route;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly) bool isFinished;

+ (id)_displayNameForRoute:(id)arg1;
+ (id)fileNameForRoute:(id)arg1;

- (void).cxx_destruct;
- (id)URL;
- (bool)_appendGPXHeaderWithError:(id*)arg1;
- (bool)_appendString:(id)arg1 error:(id*)arg2;
- (id)_trackpointEntryForLocation:(id)arg1;
- (bool)appendLocations:(id)arg1 error:(id*)arg2;
- (bool)finishWithError:(id*)arg1;
- (id)initWithURL:(id)arg1 route:(id)arg2;
- (bool)isFinished;

@end
