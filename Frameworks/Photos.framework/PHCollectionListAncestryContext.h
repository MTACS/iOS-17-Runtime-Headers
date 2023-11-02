
@interface PHCollectionListAncestryContext : NSObject {
    <NSFastEnumeration> * _allCollectionLists;
    NSMutableDictionary * _collectionListsByOID;
}

@property (retain) <NSFastEnumeration> *allCollectionLists;
@property (retain) NSMutableDictionary *collectionListsByOID;

- (void).cxx_destruct;
- (id)allCollectionLists;
- (id)collectionListsByOID;
- (id)folderForID:(id)arg1;
- (id)initWithCollectionLists:(id)arg1;
- (void)setAllCollectionLists:(id)arg1;
- (void)setCollectionListsByOID:(id)arg1;

@end
