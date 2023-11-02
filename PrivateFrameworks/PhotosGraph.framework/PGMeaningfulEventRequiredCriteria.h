
@interface PGMeaningfulEventRequiredCriteria : PGMeaningfulEventCriteria {
    NSString * _identifier;
    NSMutableDictionary * _internalAdditionalInfo;
    double  _minimumScore;
    bool  _mustBeInteresting;
}

@property (nonatomic, readonly) NSDictionary *additionalInfo;
@property (nonatomic, retain) PGMeaningfulEventPartOfDayTrait *allPartsOfDayTrait;
@property (nonatomic, retain) PGMeaningfulEventCollectionTrait *datesTrait;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) NSMutableDictionary *internalAdditionalInfo;
@property (nonatomic, retain) PGMeaningfulEventLocationMobilityTrait *locationMobilityTrait;
@property (nonatomic, retain) PGMeaningfulEventLocationCollectionTrait *locationsTrait;
@property (nonatomic, retain) PGMeaningfulEventNumberTrait *maximumDurationTrait;
@property (nonatomic, readonly) NSString *meaningNodeLabel;
@property (nonatomic, retain) PGMeaningfulEventNumberTrait *minimumDurationTrait;
@property (nonatomic, readonly) double minimumScore;
@property (nonatomic) bool mustBeInteresting;
@property (nonatomic, retain) PGMeaningfulEventNumberTrait *numberOfPeopleTrait;
@property (nonatomic, retain) PGMeaningfulEventCollectionTrait *peopleTrait;
@property (nonatomic, retain) PGMeaningfulEventCollectionTrait *poisTrait;
@property (nonatomic, retain) PGMeaningfulEventCollectionTrait *publicEventCategoriesTrait;
@property (nonatomic, retain) PGMeaningfulEventCollectionTrait *roisTrait;
@property (nonatomic, retain) PGMeaningfulEventSceneCollectionTrait *scenesTrait;
@property (nonatomic, retain) PGMeaningfulEventPartOfDayTrait *significantPartsOfDayTrait;
@property (nonatomic, retain) PGMeaningfulEventCollectionTrait *socialGroupsTrait;

- (void).cxx_destruct;
- (id)additionalInfo;
- (id)debugDescription;
- (id)description;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 minimumScore:(double)arg2 graph:(id)arg3;
- (id)internalAdditionalInfo;
- (id)meaningNodeLabel;
- (double)minimumScore;
- (bool)mustBeInteresting;
- (void)setAdditionalInfoForKey:(id)arg1 value:(id)arg2;
- (void)setInternalAdditionalInfo:(id)arg1;
- (void)setMustBeInteresting:(bool)arg1;

@end
