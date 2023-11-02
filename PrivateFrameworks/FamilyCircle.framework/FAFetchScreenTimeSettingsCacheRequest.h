
@interface FAFetchScreenTimeSettingsCacheRequest : FAFamilyCircleRequest {
    NSNumber * _memberDSID;
}

@property (readonly, copy) NSNumber *memberDSID;

- (void).cxx_destruct;
- (id)enableSettings:(id*)arg1;
- (id)initWithFamilyMemberDSID:(id)arg1;
- (id)memberDSID;
- (void)startRequestWithCompletionHandler:(id /* block */)arg1;

@end
