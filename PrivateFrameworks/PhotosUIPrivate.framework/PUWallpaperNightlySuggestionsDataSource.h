
@interface PUWallpaperNightlySuggestionsDataSource : PUPassiveContentDataSource {
    NSDate * _date;
    NSDateFormatter * _dateFormatter;
    NSPointerArray * _delegates;
    PHFetchResult * _fetchResult;
    PHPhotoLibrary * _photoLibrary;
    <PUWallpaperNightlySuggestionsPosterConfiguration> * _posterConfiguration;
}

@property (nonatomic, copy) NSDate *date;
@property (nonatomic, retain) <PUWallpaperNightlySuggestionsPosterConfiguration> *posterConfiguration;

- (void).cxx_destruct;
- (id)_dictionaryWithPosterConfiguration:(id)arg1;
- (id)date;
- (id)delegates;
- (id)fetchResult;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)objectAtIndexPath:(id)arg1;
- (id)posterConfiguration;
- (void)refresh;
- (void)setDate:(id)arg1;
- (void)setPosterConfiguration:(id)arg1;
- (unsigned short)subtype;
- (id)title;

@end
