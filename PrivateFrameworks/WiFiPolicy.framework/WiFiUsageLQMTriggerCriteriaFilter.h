
@interface WiFiUsageLQMTriggerCriteriaFilter : NSObject {
    NSMutableArray * _criterias;
    NSMutableSet * _features;
    NSPredicate * _filterSamplesPredicate;
}

@property (nonatomic, retain) NSMutableArray *criterias;
@property (nonatomic, retain) NSMutableSet *features;
@property (nonatomic, retain) NSPredicate *filterSamplesPredicate;

- (void).cxx_destruct;
- (id)criterias;
- (id)description;
- (id)features;
- (id)filterSamplesPredicate;
- (id)initWith:(id)arg1 forFields:(id)arg2 andFeatures:(id)arg3;
- (void)setCriterias:(id)arg1;
- (void)setFeatures:(id)arg1;
- (void)setFilterSamplesPredicate:(id)arg1;

@end
