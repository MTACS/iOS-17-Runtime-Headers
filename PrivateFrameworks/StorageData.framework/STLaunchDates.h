
@interface STLaunchDates : NSObject {
    NSDate * _latestDate;
    NSMutableDictionary * _launchDatesByApp;
}

@property (retain) NSDate *latestDate;
@property (retain) NSMutableDictionary *launchDatesByApp;

+ (id)sharedDates;

- (void).cxx_destruct;
- (void)_writeDatesPref:(id)arg1;
- (void)addBiomeDates;
- (void)addSpotlightDates;
- (id)init;
- (id)latestDate;
- (id)launchDateForApp:(id)arg1;
- (id)launchDatesByApp;
- (void)load;
- (void)readDatesPref;
- (void)refreshDates;
- (void)setLatestDate:(id)arg1;
- (void)setLaunchDatesByApp:(id)arg1;
- (void)updateDates:(id)arg1;
- (void)writeDatesPref;

@end
