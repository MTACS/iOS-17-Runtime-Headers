
@interface FASaveScreenTimeSettingsCacheRequest : FAFamilyCircleRequest {
    NSNumber * _memberDSID;
    FAScreentimeSettingsObjectCache * _object;
}

@property (copy) NSNumber *memberDSID;
@property (readonly, copy) FAScreentimeSettingsObjectCache *object;

- (void).cxx_destruct;
- (id)initWithFamilyMemberDSID:(id)arg1 screentimeObject:(id)arg2;
- (id)memberDSID;
- (id)object;
- (void)setMemberDSID:(id)arg1;
- (void)startRequestWithCompletionHandler:(id /* block */)arg1;

@end
