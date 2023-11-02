
@interface ATXDigestSetupFlowProvider : NSObject {
    bool  _containsMessageAndTimeSensitiveData;
    ATXNotificationAndSuggestionDatastore * _datastore;
    unsigned long long  _numDaysOfData;
}

@property (nonatomic) bool containsMessageAndTimeSensitiveData;
@property (nonatomic) unsigned long long numDaysOfData;

- (void).cxx_destruct;
- (void)addRemainingAppsWithNoNotificationVolume:(id)arg1;
- (id)appsSortedByNumOfNotificationsGivenNumOfDays:(unsigned long long)arg1;
- (bool)containsMessageAndTimeSensitiveData;
- (id)init;
- (id)initWithDatastore:(id)arg1;
- (unsigned long long)numDaysOfData;
- (unsigned long long)numDaysSinceTimestamp:(double)arg1;
- (void)numberOfActiveNotificationsWithCompletionHandler:(id /* block */)arg1;
- (void)setContainsMessageAndTimeSensitiveData:(bool)arg1;
- (void)setNumDaysOfData:(unsigned long long)arg1;

@end
