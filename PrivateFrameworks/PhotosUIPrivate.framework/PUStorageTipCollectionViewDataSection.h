
@interface PUStorageTipCollectionViewDataSection : PXDataSection {
    NSArray * _allItems;
    long long  _totalStorageSize;
}

@property (nonatomic, readonly) NSArray *allItems;
@property (nonatomic, readonly) long long totalStorageSize;

- (void).cxx_destruct;
- (id)allItems;
- (long long)count;
- (id)initWithOutlineObject:(id)arg1;
- (id)initWithSizesDictionary:(id)arg1 countsDictionary:(id)arg2;
- (id)initWithZerosWithStorageTipCount:(long long)arg1;
- (id)objectAtIndex:(long long)arg1;
- (long long)totalStorageSize;

@end
