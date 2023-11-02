
@interface PXFeedTestSectionInfo : PXFeedSectionInfo {
    long long  _countOfItems;
    PLPhotoLibrary * _photoLibrary;
}

@property (nonatomic, readonly) long long countOfItems;

- (void).cxx_destruct;
- (id)albumTitle;
- (id)captionForItemAtIndex:(long long)arg1;
- (long long)countOfItems;
- (id)date;
- (id)initWithPhotoLibrary:(id)arg1;
- (bool)isLoaded;
- (long long)numberOfItems;
- (id)photoLibrary;
- (long long)sectionType;

@end
