
@interface MTPodcastDetailDataSource : NSObject <MTPodcastDetailEpisodeSectionDelegate> {
    <MTPodcastDetailDataSourceDelegate> * _delegate;
    NSString * _podcastUuid;
    NSArray * _sections;
    unsigned long long  _selectedTab;
    bool  _showOnlyRssContent;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MTPodcastDetailDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *podcastUuid;
@property (nonatomic, readonly) NSArray *sections;
@property (nonatomic) unsigned long long selectedTab;
@property (nonatomic) bool showOnlyRssContent;
@property (readonly) Class superclass;

+ (id)predicateForPodcast:(id)arg1 sectionType:(unsigned long long)arg2;
+ (id)sortDescriptorsForPodcastUuid:(id)arg1;

- (void).cxx_destruct;
- (id)createSectionForDarkPlacard;
- (id)createSectionForEmptyOverlay;
- (id)createSectionForFeed;
- (id)createSectionForIsFromiTunesSync;
- (id)createSectionForOtherEpisodes;
- (id)createSectionForPlayedToBeDeleted;
- (id)createSectionForUnplayed;
- (id)delegate;
- (void)episodeSection:(id)arg1 didChangeObject:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4 newIndex:(unsigned long long)arg5;
- (id)feedSections;
- (unsigned long long)indexForSection:(id)arg1;
- (id)initWithPodcastUuid:(id)arg1;
- (id)podcast;
- (id)podcastUuid;
- (void)reloadData;
- (id)savedSections;
- (void)sectionDidChangeContent:(id)arg1;
- (void)sectionWillChangeContent:(id)arg1;
- (id)sections;
- (unsigned long long)selectedTab;
- (void)setDelegate:(id)arg1;
- (void)setSelectedTab:(unsigned long long)arg1;
- (void)setShowOnlyRssContent:(bool)arg1;
- (bool)showOnlyRssContent;
- (id)unplayedSections;

@end
