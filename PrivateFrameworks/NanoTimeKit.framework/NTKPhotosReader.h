
@interface NTKPhotosReader : NSObject <NSFastEnumeration> {
    NSString * _assetCollectionIdentifier;
    <NTKPhotosReaderDelegate> * _delegate;
    unsigned long long  _mutationCount;
    NSString * _resourceDirectory;
}

@property (nonatomic, retain) NSString *assetCollectionIdentifier;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic) <NTKPhotosReaderDelegate> *delegate;
@property (nonatomic) unsigned long long mutationCount;
@property (nonatomic, readonly) NSString *resourceDirectory;

+ (id)readerForMemoriesWithResourceDirectory:(id)arg1;
+ (id)readerForResourceDirectory:(id)arg1;
+ (id)readerForSyncedAlbumWithResourceDirectory:(id)arg1;

- (void).cxx_destruct;
- (id)assetCollectionIdentifier;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)delegate;
- (id)firstObject;
- (id)initWithResourceDirectory:(id)arg1;
- (id)lastObject;
- (unsigned long long)mutationCount;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)resourceDirectory;
- (void)setAssetCollectionIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMutationCount:(unsigned long long)arg1;

@end
