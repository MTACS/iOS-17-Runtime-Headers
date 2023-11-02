
@interface MPMusicPlayerControllerMutableQueue : MPMusicPlayerControllerQueue {
    NSMutableDictionary * _insertedDescriptors;
    NSMutableArray * _removedItems;
}

@property (nonatomic, retain) NSMutableDictionary *insertedDescriptors;
@property (nonatomic, readonly) MPMusicPlayerControllerApplicationQueueModifications *modifications;
@property (nonatomic, retain) NSMutableArray *removedItems;

- (void).cxx_destruct;
- (void)_insertQueueDescriptor:(id)arg1 afterItemWithIdentifier:(id)arg2;
- (void)_removeItemWithIdentifier:(id)arg1;
- (id)initWithController:(id)arg1;
- (void)insertQueueDescriptor:(id)arg1 afterItem:(id)arg2;
- (id)insertedDescriptors;
- (id)modifications;
- (void)removeItem:(id)arg1;
- (id)removedItems;
- (void)setInsertedDescriptors:(id)arg1;
- (void)setRemovedItems:(id)arg1;

@end
