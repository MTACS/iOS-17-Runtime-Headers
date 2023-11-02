
@protocol MessageListItemFutureLoading <NSObject>

@required

- (<EMCollectionItemID> *)itemID;
- (<EFCancelable> *)messageListItemFetchTimeoutCancelable;
- (EFFuture *)messageListItemFuture;
- (void)setItemID:(id <EMCollectionItemID>)arg1;
- (void)setMessageListItemFetchTimeoutCancelable:(id <EFCancelable>)arg1;
- (void)setMessageListItemFuture:(EFFuture *)arg1;

@end
