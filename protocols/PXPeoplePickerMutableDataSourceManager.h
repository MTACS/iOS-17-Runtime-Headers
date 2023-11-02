
@protocol PXPeoplePickerMutableDataSourceManager <PXMutableSectionedDataSourceManager>

@required

- (void)deselectAllLocalIdentifiers;
- (void)setDisabledLocalIdentifiers:(NSArray *)arg1;
- (void)setLocalIdentifiers:(NSArray *)arg1 selected:(bool)arg2;
- (void)setPeople:(PHFetchResult *)arg1;
- (void)setSuggestedLocalIdentifiers:(NSArray *)arg1 withPhotoLibrary:(PHPhotoLibrary *)arg2;

@end
