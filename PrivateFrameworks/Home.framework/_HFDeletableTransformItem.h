
@interface _HFDeletableTransformItem : HFTransformItem <HFHomeObserver, HFItemDeletionProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)hf_canDeleteItem;
- (id)hf_deleteItem;

@end
