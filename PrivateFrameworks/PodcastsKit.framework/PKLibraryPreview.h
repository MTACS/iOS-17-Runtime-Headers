
@interface PKLibraryPreview : NSObject {
    NSArray * _shows;
    NSArray * _stations;
}

@property (nonatomic, copy) NSArray *shows;
@property (nonatomic, copy) NSArray *stations;

+ (id)_readFromPodcastsContainerWithDataSource:(id)arg1;
+ (id)readFromPodcastsContainer;
+ (id)readPlistWithPath:(id)arg1;

- (void).cxx_destruct;
- (id)initWithShows:(id)arg1 stations:(id)arg2;
- (void)setShows:(id)arg1;
- (void)setStations:(id)arg1;
- (id)shows;
- (id)stations;

@end
