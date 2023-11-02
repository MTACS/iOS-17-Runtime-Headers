
@interface CKDMMCSItemGroupSet : NSObject {
    NSMutableDictionary * _itemsByGroupTuple;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, retain) NSMutableDictionary *itemsByGroupTuple;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)addItem:(id)arg1;
- (id)allItemGroups;
- (id)description;
- (id)error;
- (id)init;
- (id)initWithItems:(id)arg1;
- (id)itemsByGroupTuple;
- (void)setItemsByGroupTuple:(id)arg1;

@end
