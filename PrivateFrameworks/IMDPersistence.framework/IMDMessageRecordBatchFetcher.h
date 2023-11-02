
@interface IMDMessageRecordBatchFetcher : IMDRecordBatchFetcher {
    NSString * _associatedChatGUID;
    bool  _sortAscending;
}

@property (nonatomic, readonly, copy) NSString *associatedChatGUID;
@property (nonatomic, readonly) bool sortAscending;

- (void).cxx_destruct;
- (id)_rowIDPredicate;
- (id)associatedChatGUID;
- (id)init;
- (id)initWithAssociatedChatGUID:(id)arg1;
- (id)initWithAssociatedChatGUID:(id)arg1 sortAscending:(bool)arg2;
- (id)nextBatchWithSize:(unsigned long long)arg1;
- (bool)sortAscending;

@end
