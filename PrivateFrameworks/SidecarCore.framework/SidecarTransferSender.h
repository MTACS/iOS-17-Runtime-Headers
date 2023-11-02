
@interface SidecarTransferSender : SidecarTransfer {
    long long  _itemID;
    NSArray * _items;
    NSMutableArray * _slices;
    long long  _type;
}

@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id /* block */)_resumeMessage:(id)arg1;
- (void)_sendCompletion:(id)arg1;
- (id)initWithSession:(id)arg1 requestID:(long long)arg2 transferID:(long long)arg3;
- (void)sendItems:(id)arg1 messageType:(long long)arg2;
- (long long)type;

@end
