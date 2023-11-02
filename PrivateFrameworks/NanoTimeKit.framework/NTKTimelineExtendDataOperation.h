
@interface NTKTimelineExtendDataOperation : NTKTimelineDataOperation {
    NSDate * _boundaryDate;
    id /* block */  _handler;
}

@property (nonatomic, copy) id /* block */ handler;

- (void).cxx_destruct;
- (void)_cancel;
- (void)_extendRight;
- (void)_invokeHandlerWithEntries:(id)arg1;
- (void)_start;
- (id /* block */)handler;
- (void)setExtendsRightFromDate:(id)arg1;
- (void)setHandler:(id /* block */)arg1;

@end
