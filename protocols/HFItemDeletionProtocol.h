
@protocol HFItemDeletionProtocol <NSObject>

@required

- (bool)hf_canDeleteItem;
- (NAFuture *)hf_deleteItem;

@end
