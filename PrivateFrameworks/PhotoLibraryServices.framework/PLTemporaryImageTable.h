
@interface PLTemporaryImageTable : NSObject {
    unsigned short  _imageFormatID;
    <PLThumbPersistenceManager> * _imageTable;
    NSString * _imageTablePath;
    NSMutableArray * _itemIndexToThumbEntryMapping;
    unsigned long long  _nextTableEntryIndex;
}

- (void).cxx_destruct;
- (void)_cleanup;
- (unsigned long long)_imageTableIndexForItemIndex:(unsigned long long)arg1;
- (void)_positional_setThumbnailsWithIdentifier:(id)arg1 thumbnailIndex:(unsigned long long)arg2 image:(id)arg3 assetUUID:(id)arg4;
- (bool)_writeBGRAThumbnailDataForImage:(id)arg1 intoTable:(id)arg2 atIndex:(unsigned long long)arg3;
- (bool)_writeCompressedThumbnailDataForImage:(id)arg1 intoTable:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)dealloc;
- (id)imageForItemAtIndex:(unsigned long long)arg1;
- (id)initWithWithPath:(id)arg1 imageFormat:(unsigned short)arg2;
- (void)insertItemAtIndex:(unsigned long long)arg1;
- (void)removeItemAtIndex:(unsigned long long)arg1;
- (void)reset;
- (void)setImage:(id)arg1 forItemAtIndex:(unsigned long long)arg2;

@end
