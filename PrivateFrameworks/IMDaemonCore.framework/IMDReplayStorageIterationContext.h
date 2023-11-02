
@interface IMDReplayStorageIterationContext : NSObject {
    IDSKVDeleteContext * _deleteContext;
}

@property (nonatomic, retain) IDSKVDeleteContext *deleteContext;

- (void)dealloc;
- (id)deleteContext;
- (void)setDeleteContext:(id)arg1;

@end
