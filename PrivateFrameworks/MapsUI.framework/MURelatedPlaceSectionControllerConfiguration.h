
@interface MURelatedPlaceSectionControllerConfiguration : NSObject {
    long long  _dataSource;
    GEORelatedPlaceModuleConfiguration * _moduleConfiguration;
    unsigned long long  _numInlineItems;
    GEORelatedPlaceList * _relatedPlaceList;
    bool  _suppressItemSelection;
    bool  _suppressSeeAllButton;
    GEOTrailHead * _trailHead;
}

@property (nonatomic, readonly) long long dataSource;
@property (nonatomic, retain) GEORelatedPlaceModuleConfiguration *moduleConfiguration;
@property (nonatomic, readonly) unsigned long long numInlineItems;
@property (nonatomic, readonly) GEORelatedPlaceList *relatedPlaceList;
@property (nonatomic) bool suppressItemSelection;
@property (nonatomic) bool suppressSeeAllButton;
@property (nonatomic, readonly) GEOTrailHead *trailHead;

- (void).cxx_destruct;
- (long long)dataSource;
- (id)initWithDataSource:(long long)arg1 relatedPlaceList:(id)arg2 trailHead:(id)arg3;
- (id)initWithRelatedPlaceList:(id)arg1;
- (id)initWithTrailHead:(id)arg1;
- (id)moduleConfiguration;
- (unsigned long long)numInlineItems;
- (id)relatedPlaceList;
- (void)setModuleConfiguration:(id)arg1;
- (void)setSuppressItemSelection:(bool)arg1;
- (void)setSuppressSeeAllButton:(bool)arg1;
- (bool)suppressItemSelection;
- (bool)suppressSeeAllButton;
- (id)trailHead;

@end
