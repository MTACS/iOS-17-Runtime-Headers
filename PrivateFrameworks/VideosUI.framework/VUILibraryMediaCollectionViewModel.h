
@interface VUILibraryMediaCollectionViewModel : NSObject {
    NSDictionary * _episodeShelfViewControllerBySeasonIdentifier;
    NSDictionary * _episodesBySeasonIdentifer;
    NSDictionary * _productLockupViewBySeasonIdentifier;
    NSDictionary * _seasonBySeasonIdentifier;
    NSArray * _seasonViewModels;
}

@property (nonatomic, retain) NSDictionary *episodeShelfViewControllerBySeasonIdentifier;
@property (nonatomic, retain) NSDictionary *episodesBySeasonIdentifer;
@property (nonatomic, readonly) bool hasContent;
@property (nonatomic, retain) NSDictionary *productLockupViewBySeasonIdentifier;
@property (nonatomic, retain) NSDictionary *seasonBySeasonIdentifier;
@property (nonatomic, retain) NSArray *seasonViewModels;

- (void).cxx_destruct;
- (id)episodeShelfViewControllerBySeasonIdentifier;
- (id)episodesBySeasonIdentifer;
- (bool)hasContent;
- (id)productLockupViewBySeasonIdentifier;
- (id)seasonBySeasonIdentifier;
- (id)seasonViewModels;
- (void)setEpisodeShelfViewControllerBySeasonIdentifier:(id)arg1;
- (void)setEpisodesBySeasonIdentifer:(id)arg1;
- (void)setProductLockupViewBySeasonIdentifier:(id)arg1;
- (void)setSeasonBySeasonIdentifier:(id)arg1;
- (void)setSeasonViewModels:(id)arg1;

@end
