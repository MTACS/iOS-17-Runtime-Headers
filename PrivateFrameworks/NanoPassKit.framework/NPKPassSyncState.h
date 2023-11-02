
@interface NPKPassSyncState : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _syncStateItems;
    unsigned long long  _version;
}

@property (nonatomic, readonly) NSData *syncStateHash;
@property (nonatomic, retain) NSMutableDictionary *syncStateItems;
@property (nonatomic, readonly) unsigned long long version;

+ (id)_currentActiveDevice;
+ (id)_deviceDomainAccessor;
+ (unsigned long long)minRemoteDevicePassSyncStateVersionSupport;
+ (void)setMinRemoteDevicePassSyncStateVersionSupport:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_commonInitWithVersion:(unsigned long long)arg1;
- (id)commonBaselinePassSyncStateWithState:(id)arg1 version:(unsigned long long)arg2;
- (void)compareWithBaselinePassSyncState:(id)arg1 outAddedSyncItems:(id*)arg2 outUpdatedSyncItems:(id*)arg3 outRemovedSyncItems:(id*)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)diffWithBaselineState:(id)arg1 representsMaterialDifferenceFromState:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPasses:(id)arg1;
- (id)initWithPasses:(id)arg1 version:(unsigned long long)arg2;
- (id)initWithProtoSyncState:(id)arg1;
- (id)initWithSyncStateItems:(id)arg1;
- (id)initWithSyncStateItems:(id)arg1 version:(unsigned long long)arg2;
- (id)initWithVersion:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPassSyncState:(id)arg1;
- (id)passSyncStateByAddingOrUpdatingSyncStateItem:(id)arg1;
- (id)passSyncStateByApplyingChange:(id)arg1;
- (id)passSyncStateByRemovingPassWithUniqueID:(id)arg1;
- (id)protoSyncState;
- (void)setSyncStateItems:(id)arg1;
- (bool)stateContainsSyncStateItem:(id)arg1;
- (bool)stateIsSubsetOfUnionOfPassSyncStates:(id)arg1;
- (id)syncStateHash;
- (id)syncStateItems;
- (unsigned long long)version;

@end
