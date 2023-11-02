
@interface ICURLBagRadioConfiguration : NSObject {
    NSDictionary * _bagRadioDictionary;
}

@property (nonatomic, readonly, copy) NSURL *baseURL;
@property (getter=isContinueListeningAvailable, nonatomic, readonly) bool continueListeningAvailable;
@property (nonatomic, readonly) long long continueListeningLoadStationThreshold;
@property (nonatomic, readonly) long long continueListeningMaxQueueSizeInRequest;
@property (nonatomic, readonly) long long continueListeningMaxUpcomingTracksSizeToMaintain;
@property (nonatomic, readonly) long long getTracksDPInfoKBSyncCount;
@property (nonatomic, readonly) long long maxSupportedProtocolVersion;

- (void).cxx_destruct;
- (id)baseURL;
- (long long)continueListeningLoadStationThreshold;
- (long long)continueListeningMaxQueueSizeInRequest;
- (long long)continueListeningMaxUpcomingTracksSizeToMaintain;
- (long long)getTracksDPInfoKBSyncCount;
- (id)initWithBagRadioDictionary:(id)arg1;
- (bool)isContinueListeningAvailable;
- (long long)maxSupportedProtocolVersion;
- (bool)shouldIncludeHTTPHeaderField:(id)arg1 forRequestURL:(id)arg2;
- (id)urlForBagRadioKey:(id)arg1;

@end
