
@interface ICURLBagLibraryDAAPConfiguration : NSObject {
    NSDictionary * _bagDictionary;
}

@property (nonatomic, readonly) long long autoUpdatePollingFrequencySeconds;
@property (nonatomic, readonly) NSString *baseURL;
@property (nonatomic, readonly) long long databaseID;
@property (nonatomic, readonly) NSString *databaseName;
@property (nonatomic, readonly) unsigned long long maxSyncRetryIntervalSeconds;
@property (getter=isOnlineGeniusForMatchEnabled, nonatomic, readonly) bool onlineGeniusForMatchEnabled;
@property (nonatomic, readonly) long long playDataBatchIntervalInMinutes;
@property (nonatomic, readonly) long long subscribedContainerPollingFrequencySeconds;
@property (nonatomic, readonly) long long updatePollingFrequencySeconds;

- (void).cxx_destruct;
- (long long)autoUpdatePollingFrequencySeconds;
- (id)baseURL;
- (long long)databaseID;
- (id)databaseName;
- (id)description;
- (id)initWithBagLibraryDAAPDictionary:(id)arg1;
- (bool)isOnlineGeniusForMatchEnabled;
- (unsigned long long)maxSyncRetryIntervalSeconds;
- (long long)playDataBatchIntervalInMinutes;
- (long long)subscribedContainerPollingFrequencySeconds;
- (long long)updatePollingFrequencySeconds;

@end
