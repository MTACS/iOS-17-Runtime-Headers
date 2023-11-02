
@interface HFItemProviderReloadResults : NSObject <NSCopying> {
    NSSet * _addedItems;
    NSSet * _existingItems;
    NSSet * _removedItems;
}

@property (nonatomic, retain) NSSet *addedItems;
@property (nonatomic, readonly) NSSet *allItems;
@property (nonatomic, retain) NSSet *existingItems;
@property (nonatomic, retain) NSSet *removedItems;

- (void).cxx_destruct;
- (id)addedItems;
- (id)allItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)existingItems;
- (id)init;
- (id)initWithAddedItems:(id)arg1 removedItems:(id)arg2 existingItems:(id)arg3;
- (id)removedItems;
- (id)resultsByMergingWithResults:(id)arg1;
- (void)setAddedItems:(id)arg1;
- (void)setExistingItems:(id)arg1;
- (void)setRemovedItems:(id)arg1;

@end
