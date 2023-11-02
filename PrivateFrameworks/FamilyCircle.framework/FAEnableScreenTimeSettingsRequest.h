
@interface FAEnableScreenTimeSettingsRequest : FAFamilyCircleRequest {
    NSNumber * _memberDSID;
    FAScreentimeSettingsObjectCache * _screentimeModelCache;
}

@property (readonly, copy) NSNumber *memberDSID;
@property (readonly) FAScreentimeSettingsObjectCache *screentimeModelCache;

- (void).cxx_destruct;
- (id)enableSettings:(id*)arg1;
- (id)initWithFamilyMemberDSID:(id)arg1 screentimeModelCache:(id)arg2;
- (id)memberDSID;
- (id)screentimeModelCache;
- (void)startRequestWithCompletionHandler:(id /* block */)arg1;

@end
