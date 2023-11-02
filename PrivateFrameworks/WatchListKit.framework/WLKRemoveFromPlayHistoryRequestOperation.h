
@interface WLKRemoveFromPlayHistoryRequestOperation : WLKUTSNetworkRequestOperation {
    NSString * _deleteID;
}

@property (nonatomic, readonly, copy) NSString *deleteID;

- (void).cxx_destruct;
- (id)deleteID;
- (id)initWithItemID:(id)arg1;

@end
