
@interface VKRecognizedItemFrameProcessorResult : VKFrameProcessorResult {
    NSArray * _addedItems;
    NSArray * _allItems;
    NSArray * _removedItems;
    NSArray * _updatedItems;
}

@property (nonatomic, copy) NSArray *addedItems;
@property (nonatomic, copy) NSArray *allItems;
@property (nonatomic, copy) NSArray *removedItems;
@property (nonatomic, copy) NSArray *updatedItems;

- (void).cxx_destruct;
- (id)addedItems;
- (id)allItems;
- (id)init;
- (id)removedItems;
- (void)setAddedItems:(id)arg1;
- (void)setAllItems:(id)arg1;
- (void)setRemovedItems:(id)arg1;
- (void)setUpdatedItems:(id)arg1;
- (id)updatedItems;

@end
