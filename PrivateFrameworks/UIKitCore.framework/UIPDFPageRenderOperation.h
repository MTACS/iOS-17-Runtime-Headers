
@interface UIPDFPageRenderOperation : NSOperation {
    UIPDFPageRenderJob * _job;
    bool  executing;
    bool  finished;
}

@property (retain) UIPDFPageRenderJob *job;

- (void)completeOperation;
- (void)dealloc;
- (id)initWithJob:(id)arg1;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (id)job;
- (void)main;
- (void)setJob:(id)arg1;
- (void)start;

@end
