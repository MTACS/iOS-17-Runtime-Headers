
@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorInternalStateModel : HMBModel <HMFLogging> {
    NSSet * _lastSynchronizedRecordIDs;
}

@property (nonatomic, retain) NSData *archivedLastSynchronizedRecordIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSSet *lastSynchronizedRecordIDs;
@property (readonly) Class superclass;

+ (id)hmbProperties;
+ (id)logCategory;
+ (id)modelID;
+ (id)parentModelID;

- (void).cxx_destruct;
- (id)init;
- (id)lastSynchronizedRecordIDs;
- (void)setLastSynchronizedRecordIDs:(id)arg1;

@end
