
@interface FMFCore.FMReverseGeocodingOperation : NSOperation {
    void _isFinished;
    void completion;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  request;
}

@property (nonatomic, readonly) bool asynchronous;
@property (nonatomic) bool finished;

- (void).cxx_destruct;
- (id)init;
- (bool)isAsynchronous;
- (bool)isFinished;
- (void)main;
- (void)setFinished:(bool)arg1;
- (void)start;

@end
