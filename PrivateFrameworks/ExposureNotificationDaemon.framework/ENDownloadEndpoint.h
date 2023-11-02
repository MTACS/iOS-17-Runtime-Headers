
@interface ENDownloadEndpoint : NSObject {
    double  _downloadInterval;
    bool  _enabled;
    ENRegion * _region;
    NSURL * _serverBaseURL;
    NSURL * _serverIndexURL;
}

@property (nonatomic, readonly) double downloadInterval;
@property (nonatomic, readonly) bool enabled;
@property (nonatomic, readonly, copy) ENRegion *region;
@property (nonatomic, readonly, copy) NSURL *serverBaseURL;
@property (nonatomic, readonly, copy) NSURL *serverIndexURL;

- (void).cxx_destruct;
- (double)downloadInterval;
- (bool)enabled;
- (id)initWithBaseURL:(id)arg1 indexURL:(id)arg2 interval:(double)arg3 enabled:(bool)arg4 region:(id)arg5;
- (id)region;
- (id)serverBaseURL;
- (id)serverIndexURL;
- (id)serverURLForFileWithRelativePath:(id)arg1;

@end
