
@interface PUPassiveContentDataSource : NSObject <PHPhotoLibraryChangeObserver> {
    NSMutableArray * _contextDataSources;
    NSPointerArray * _delegates;
    PHFetchResult * _fetchResult;
    NSString * _title;
}

@property (nonatomic, retain) NSMutableArray *contextDataSources;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSPointerArray *delegates;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PHFetchResult *fetchResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;

+ (id)ambientDataSource;
+ (id)wallpaperDataSource;
+ (id)wallpaperSubtypeTitleFromSubtype:(unsigned short)arg1;

- (void).cxx_destruct;
- (void)_setupContextDataSourcesIfNeeded;
- (id)contextDataSources;
- (unsigned long long)count;
- (unsigned long long)countInSection:(unsigned long long)arg1;
- (id)delegates;
- (id)fetchResult;
- (id)indexPathForSuggestionUUID:(id)arg1;
- (id)initForAmbientFeatured;
- (id)initForSettlingEffect;
- (id)initWithFetchResult:(id)arg1;
- (id)initWithSuggestionSubtype:(unsigned short)arg1;
- (id)objectAtIndexPath:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (unsigned long long)sectionCount;
- (void)setContextDataSources:(id)arg1;
- (id)title;
- (id)titleForSection:(unsigned long long)arg1;

@end
