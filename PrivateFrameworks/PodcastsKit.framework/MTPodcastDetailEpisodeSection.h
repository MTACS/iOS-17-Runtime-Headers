
@interface MTPodcastDetailEpisodeSection : NSObject <NSFetchedResultsControllerDelegate> {
    <MTPodcastDetailEpisodeSectionDelegate> * _delegate;
    <MTFetchedResultsControllerProtocol> * _frc;
    NSPredicate * _predicate;
    unsigned long long  _sectionType;
    bool  _showTitleWithNoEpisodes;
    NSArray * _sortDescriptors;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MTPodcastDetailEpisodeSectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <MTFetchedResultsControllerProtocol> *frc;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSPredicate *predicate;
@property (nonatomic) unsigned long long sectionType;
@property (nonatomic) bool showTitleWithNoEpisodes;
@property (nonatomic, retain) NSArray *sortDescriptors;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (id)dependentPropertyKeys;

- (void).cxx_destruct;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controllerWillChangeContent:(id)arg1;
- (id)delegate;
- (id)description;
- (id)episodes;
- (id)frc;
- (unsigned long long)indexOfEpisode:(id)arg1;
- (void)initializeFrc;
- (void)loadData;
- (id)predicate;
- (unsigned long long)sectionType;
- (void)setDelegate:(id)arg1;
- (void)setFrc:(id)arg1;
- (void)setPredicate:(id)arg1;
- (void)setSectionType:(unsigned long long)arg1;
- (void)setShowTitleWithNoEpisodes:(bool)arg1;
- (void)setSortDescriptors:(id)arg1;
- (void)setTitle:(id)arg1;
- (bool)showTitleWithNoEpisodes;
- (id)sortDescriptors;
- (id)title;

@end
