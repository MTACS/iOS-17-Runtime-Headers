
@interface _MFBlockIterationHandler : NSObject <MFSearchResultHandler, QueryProgressMonitor> {
    id /* block */  _block;
    bool  _cancelled;
    MFActivityMonitor * _monitor;
}

- (void).cxx_destruct;
- (bool)handleMessage:(id)arg1;
- (id)initWithBlock:(id /* block */)arg1;
- (bool)shouldCancel;

@end
