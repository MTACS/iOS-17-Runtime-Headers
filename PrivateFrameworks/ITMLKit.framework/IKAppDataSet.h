
@interface IKAppDataSet : NSObject <NSCopying> {
    NSDictionary * _indexTitles;
    NSArray * _itemIDs;
    NSArray * _items;
    NSDictionary * _usedPrototypesByIdentifier;
}

@property (nonatomic, readonly, copy) NSDictionary *indexTitles;
@property (nonatomic, readonly, copy) NSArray *itemIDs;
@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic, readonly, copy) NSDictionary *usedPrototypesByIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)indexTitles;
- (id)initWithItems:(id)arg1 usedPrototypesByIdentifier:(id)arg2 indexTitles:(id)arg3;
- (id)itemIDs;
- (id)items;
- (id)usedPrototypesByIdentifier;

@end
