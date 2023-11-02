
@interface HUFaceRecognitionRecentEventsItemProvider : HFItemProvider {
    NSDateInterval * _dateRange;
    unsigned long long  _fetchLimit;
    HMHome * _home;
    NSMutableSet * _personItems;
}

@property (nonatomic, retain) NSDateInterval *dateRange;
@property (nonatomic) unsigned long long fetchLimit;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) NSMutableSet *personItems;

+ (id)_coalescedItems:(id)arg1;
+ (id /* block */)cameraSignificantEventDateComparator;
+ (bool)prefersNonBlockingReloads;

- (void).cxx_destruct;
- (id)dateRange;
- (unsigned long long)fetchLimit;
- (id)home;
- (id)initWithHome:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (id)personItems;
- (id)reloadItems;
- (void)setDateRange:(id)arg1;
- (void)setFetchLimit:(unsigned long long)arg1;
- (void)setHome:(id)arg1;
- (void)setPersonItems:(id)arg1;

@end
