
@interface NTKTimelineUpdateEndDateOperation : NTKTimelineDataOperation {
    NSDate * _endDate;
    id /* block */  _handler;
}

@property (nonatomic, copy) id /* block */ handler;

- (void).cxx_destruct;
- (void)_cancel;
- (void)_getEndDate;
- (void)_invokeHandler;
- (void)_start;
- (id /* block */)handler;
- (void)setHandler:(id /* block */)arg1;

@end
