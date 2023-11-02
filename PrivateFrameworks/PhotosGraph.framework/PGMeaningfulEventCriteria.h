
@interface PGMeaningfulEventCriteria : NSObject {
    PGMeaningfulEventPartOfDayTrait * _allPartsOfDayTrait;
    PGMeaningfulEventCollectionTrait * _datesTrait;
    bool  _debug;
    PGGraph * _graph;
    PGMeaningfulEventLocationMobilityTrait * _locationMobilityTrait;
    PGMeaningfulEventLocationCollectionTrait * _locationsTrait;
    PGMeaningfulEventNumberTrait * _maximumDurationTrait;
    PGMeaningfulEventNumberTrait * _minimumDurationTrait;
    PGMeaningfulEventNumberTrait * _numberOfPeopleTrait;
    PGMeaningfulEventCollectionTrait * _peopleTrait;
    PGMeaningfulEventCollectionTrait * _poisTrait;
    PGMeaningfulEventCollectionTrait * _publicEventCategoriesTrait;
    PGMeaningfulEventCollectionTrait * _roisTrait;
    PGMeaningfulEventSceneCollectionTrait * _scenesTrait;
    PGMeaningfulEventPartOfDayTrait * _significantPartsOfDayTrait;
    PGMeaningfulEventCollectionTrait * _socialGroupsTrait;
}

@property (nonatomic, retain) PGMeaningfulEventPartOfDayTrait *allPartsOfDayTrait;
@property (nonatomic, retain) PGMeaningfulEventCollectionTrait *datesTrait;
@property (getter=isDebug, nonatomic) bool debug;
@property (nonatomic, readonly) PGGraph *graph;
@property (nonatomic, retain) PGMeaningfulEventLocationMobilityTrait *locationMobilityTrait;
@property (nonatomic, retain) PGMeaningfulEventLocationCollectionTrait *locationsTrait;
@property (nonatomic, retain) PGMeaningfulEventNumberTrait *maximumDurationTrait;
@property (nonatomic, retain) PGMeaningfulEventNumberTrait *minimumDurationTrait;
@property (nonatomic, retain) PGMeaningfulEventNumberTrait *numberOfPeopleTrait;
@property (nonatomic, retain) PGMeaningfulEventCollectionTrait *peopleTrait;
@property (nonatomic, retain) PGMeaningfulEventCollectionTrait *poisTrait;
@property (nonatomic, retain) PGMeaningfulEventCollectionTrait *publicEventCategoriesTrait;
@property (nonatomic, retain) PGMeaningfulEventCollectionTrait *roisTrait;
@property (nonatomic, retain) PGMeaningfulEventSceneCollectionTrait *scenesTrait;
@property (nonatomic, retain) PGMeaningfulEventPartOfDayTrait *significantPartsOfDayTrait;
@property (nonatomic, retain) PGMeaningfulEventCollectionTrait *socialGroupsTrait;

- (void).cxx_destruct;
- (id)_debugDescriptionWithMomentNode:(id)arg1;
- (id)allPartsOfDayTrait;
- (id)datesTrait;
- (id)graph;
- (id)initWithGraph:(id)arg1;
- (bool)isDebug;
- (id)locationMobilityTrait;
- (id)locationsTrait;
- (id)maximumDurationTrait;
- (id)minimumDurationTrait;
- (id)numberOfPeopleTrait;
- (id)peopleTrait;
- (id)poisTrait;
- (id)publicEventCategoriesTrait;
- (id)roisTrait;
- (id)scenesTrait;
- (void)setAllPartsOfDayTrait:(id)arg1;
- (void)setDatesTrait:(id)arg1;
- (void)setDebug:(bool)arg1;
- (void)setLocationMobilityTrait:(id)arg1;
- (void)setLocationsTrait:(id)arg1;
- (void)setMaximumDurationTrait:(id)arg1;
- (void)setMinimumDurationTrait:(id)arg1;
- (void)setNumberOfPeopleTrait:(id)arg1;
- (void)setPeopleTrait:(id)arg1;
- (void)setPoisTrait:(id)arg1;
- (void)setPublicEventCategoriesTrait:(id)arg1;
- (void)setRoisTrait:(id)arg1;
- (void)setScenesTrait:(id)arg1;
- (void)setSignificantPartsOfDayTrait:(id)arg1;
- (void)setSocialGroupsTrait:(id)arg1;
- (id)significantPartsOfDayTrait;
- (id)socialGroupsTrait;

@end
