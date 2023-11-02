
@interface GEOAPUploadStage : NSObject {
    double  _ttl;
    GEOAPURLSessionConfig * _urlSessionConfig;
}

@property (nonatomic, readonly) double ttl;
@property (nonatomic, readonly) GEOAPURLSessionConfig *urlSessionConfig;

- (void).cxx_destruct;
- (id)initWithURLSessionConfig:(id)arg1 ttl:(double)arg2;
- (double)ttl;
- (id)urlSessionConfig;

@end
