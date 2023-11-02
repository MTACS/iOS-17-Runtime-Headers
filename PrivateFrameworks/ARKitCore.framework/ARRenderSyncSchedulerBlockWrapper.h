
@interface ARRenderSyncSchedulerBlockWrapper : NSObject {
    id /* block */  _block;
    NSDate * _entryTimestamp;
}

@property (nonatomic, copy) id /* block */ block;
@property (nonatomic, retain) NSDate *entryTimestamp;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)entryTimestamp;
- (void)setBlock:(id /* block */)arg1;
- (void)setEntryTimestamp:(id)arg1;

@end
