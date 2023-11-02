
@interface HMDNetworkRouterFirewallRuleCloudZoneFetchInfo : HMDNetworkRouterFirewallRuleManagerBackingStoreFetchHelper <HMFLogging> {
    CKServerChangeToken * _changeToken;
    NSSet * _interestedRecordIDs;
    HMBLocalZoneMirrorInput * _mirrorInput;
    CKServerChangeToken * _originalChangeToken;
}

@property (nonatomic, retain) CKServerChangeToken *changeToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *interestedRecordIDs;
@property (nonatomic, retain) HMBLocalZoneMirrorInput *mirrorInput;
@property (nonatomic, readonly) CKServerChangeToken *originalChangeToken;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)changeToken;
- (void)finishWithError:(id)arg1;
- (id)initWithOptions:(id)arg1 changeToken:(id)arg2 promise:(id)arg3 database:(id)arg4 useAnonymousRequests:(bool)arg5 interestedRecordIDs:(id)arg6 mirrorInput:(id)arg7;
- (id)interestedRecordIDs;
- (id)mirrorInput;
- (id)originalChangeToken;
- (void)setChangeToken:(id)arg1;
- (void)setMirrorInput:(id)arg1;

@end
