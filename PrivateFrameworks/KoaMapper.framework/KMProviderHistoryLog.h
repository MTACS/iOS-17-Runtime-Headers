
@interface KMProviderHistoryLog : NSObject {
    bool  _donationStartTimeRecorded;
    KVDictionaryLog * _log;
    NSString * _originAppId;
}

- (void).cxx_destruct;
- (id)_recordDonationEndTime;
- (id)_recordHistoryToken:(id)arg1;
- (id)_recordVersion:(unsigned long long)arg1;
- (id)getDonationEndTime;
- (id)getDonationStartTime;
- (id)getHistoryToken;
- (unsigned long long)getVersion;
- (id)initWithOriginAppId:(id)arg1;
- (id)initWithOriginAppId:(id)arg1 rootDirectory:(id)arg2;
- (bool)recordChangesAcceptedWithVersion:(unsigned long long)arg1 historyToken:(id)arg2;
- (bool)recordDonationStartTime;

@end
