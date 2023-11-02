
@interface MPHomeSharingRentalTracker : NSObject {
    NSObject<OS_dispatch_queue> * _rentalTrackerQueue;
    NSMutableDictionary * _rentals;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)_saveRentals;
- (void)addRentalWithItemID:(unsigned long long)arg1 databaseID:(id)arg2;
- (void)removeAllRentalsForDatabaseID:(id)arg1;
- (void)removeRentalWithItemID:(unsigned long long)arg1;

@end
