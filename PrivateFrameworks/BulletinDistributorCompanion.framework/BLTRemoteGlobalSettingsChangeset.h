
@interface BLTRemoteGlobalSettingsChangeset : NSObject {
    long long  _globalScheduledDeliverySetting;
}

@property (nonatomic, readonly) BLTPBSetRemoteGlobalSettingsRequest *blt_protobuf;
@property (nonatomic) long long globalScheduledDeliverySetting;
@property (nonatomic, readonly) bool needsSend;
@property (nonatomic, readonly) NSString *remoteInfoDirectoryLocation;
@property (nonatomic, readonly) NSString *remoteInfoFileLocation;

+ (id)remoteGlobalSettingsChangesetWithProvider:(id)arg1;

- (id)blt_protobuf;
- (id)description;
- (long long)globalScheduledDeliverySetting;
- (id)globalScheduledDeliverySettingDescription;
- (id)initWithProvider:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)needsSend;
- (id)remoteInfoDirectoryLocation;
- (id)remoteInfoFileLocation;
- (bool)sendSuccess;
- (void)setGlobalScheduledDeliverySetting:(long long)arg1;

@end
