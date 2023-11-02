
@interface FPAggregateProgress : NSProgress {
    NSMutableArray * _childProgresses;
}

- (void).cxx_destruct;
- (void)addChild:(id)arg1;
- (void)cancel;
- (void)startReportingProgress;

@end
