
@interface PKDeviceSharingCapabilitiesFetchStatus : NSObject {
    NSString * _appleID;
    bool  _deviceCountFetchInProgress;
    NSError * _fetchError;
    NSDate * _fetchStartDate;
    NSMutableArray * _fetchedCapabilities;
    long long  _maximumPossibleDevices;
}

@property (nonatomic, readonly, copy) NSString *appleID;
@property (nonatomic) bool deviceCountFetchInProgress;
@property (nonatomic, copy) NSError *fetchError;
@property (nonatomic, readonly, copy) NSDate *fetchStartDate;
@property (nonatomic, readonly, copy) NSArray *fetchedCapabilities;
@property (nonatomic) long long maximumPossibleDevices;

- (void).cxx_destruct;
- (void)addDeviceSharingCapabilities:(id)arg1;
- (bool)allPossibleCapabilitiesFetched;
- (id)appleID;
- (id)description;
- (bool)deviceCountFetchInProgress;
- (id)fetchError;
- (id)fetchStartDate;
- (id)fetchedCapabilities;
- (bool)hasDeviceVersionWithOSVersionRequirementRange:(id)arg1;
- (id)initWithAppleID:(id)arg1 fetchStartDate:(id)arg2;
- (long long)maximumPossibleDevices;
- (long long)secondsPassedSinceFetchStart;
- (void)setDeviceCountFetchInProgress:(bool)arg1;
- (void)setFetchError:(id)arg1;
- (void)setMaximumPossibleDevices:(long long)arg1;

@end
