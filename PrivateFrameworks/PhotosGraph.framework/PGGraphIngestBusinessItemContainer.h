
@interface PGGraphIngestBusinessItemContainer : NSObject <PGGraphIngestBusiness> {
    CLSBusinessItem * _businessItem;
    NSDateInterval * _dateInterval;
    CLSLocationOfInterestVisit * _visit;
}

@property (nonatomic, readonly) NSArray *businessCategories;
@property (nonatomic, readonly) CLSBusinessItem *businessItem;
@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasRoutineVisit;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) CLCircularRegion *region;
@property (nonatomic, readonly) double routineVisitConfidence;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long venueCapacity;
@property (nonatomic, readonly) CLSLocationOfInterestVisit *visit;

- (void).cxx_destruct;
- (id)businessCategories;
- (id)businessItem;
- (id)dateInterval;
- (bool)hasRoutineVisit;
- (id)initWithBusinessItem:(id)arg1 dateInterval:(id)arg2;
- (id)initWithBusinessItem:(id)arg1 visit:(id)arg2;
- (id)initWithBusinessItem:(id)arg1 visit:(id)arg2 dateInterval:(id)arg3;
- (unsigned long long)muid;
- (id)name;
- (id)region;
- (double)routineVisitConfidence;
- (void)updateBusinessItem:(id)arg1;
- (long long)venueCapacity;
- (id)visit;

@end
