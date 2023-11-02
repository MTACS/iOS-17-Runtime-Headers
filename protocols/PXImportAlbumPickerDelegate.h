
@protocol PXImportAlbumPickerDelegate <NSObject>

@required

- (void)collectionSelected:(PHCollection *)arg1;
- (void)targetLibrarySelected:(unsigned long long)arg1;

@end
