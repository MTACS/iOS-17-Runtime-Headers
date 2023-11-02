
@interface PXImportAssetCollection : PXBaseDisplayCollection <NSCopying> {
    bool  _alreadyImportedGroup;
    NSArray * _arrangedAssetList;
    NSMutableArray * _assetList;
    NSObject<OS_dispatch_queue> * _assetQueue;
    NSMutableSet * _assetUUIDs;
    NSString * _identifier;
    bool  _needsSorting;
}

@property (nonatomic) bool alreadyImportedGroup;
@property (nonatomic, retain) NSString *identifier;

+ (id)dayFormatter;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (bool)alreadyImportedGroup;
- (id)arrangedObjects;
- (void)arrangedObjects:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)identifier;
- (long long)indexOfItem:(id)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)localizedTitle;
- (long long)numberOfItems;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (void)removeObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setAlreadyImportedGroup:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (id)unsortedObjects;

@end
