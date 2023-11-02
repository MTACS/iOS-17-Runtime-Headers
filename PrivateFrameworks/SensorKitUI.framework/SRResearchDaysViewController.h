
@interface SRResearchDaysViewController : UITableViewController {
    NSMutableSet * _deletedDays;
    double  _end;
    long long  _numberOfDays;
    NSArray * _tombstones;
}

@property (nonatomic, retain) NSMutableSet *deletedDays;
@property (nonatomic) double end;
@property (nonatomic) long long numberOfDays;
@property (nonatomic, retain) NSArray *tombstones;

- (id)dateForRow:(long long)arg1;
- (id)datesFrom:(double)arg1 to:(double)arg2;
- (void)dealloc;
- (id)deletedDays;
- (double)end;
- (id)init;
- (long long)numberOfDays;
- (void)setDeletedDays:(id)arg1;
- (void)setEnd:(double)arg1;
- (void)setNumberOfDays:(long long)arg1;
- (void)setTombstones:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tombstones;
- (void)viewDidLoad;

@end
