
@interface NPKPassSyncChange : NSObject <NSCopying, NSSecureCoding> {
    NSData * _baseManifestHashForPartialUpdate;
    unsigned long long  _changeType;
    NSUUID * _changeUUID;
    NSData * _passData;
    NSData * _reconciledStateHash;
    unsigned long long  _reconciledStateVersion;
    NSDictionary * _remoteAssetsForPartialUpdate;
    NPKPassSyncStateItem * _syncStateItem;
    NSString * _uniqueID;
}

@property (nonatomic, retain) NSData *baseManifestHashForPartialUpdate;
@property (nonatomic) unsigned long long changeType;
@property (nonatomic, retain) NSUUID *changeUUID;
@property (nonatomic, retain) NSData *passData;
@property (nonatomic, retain) NSData *reconciledStateHash;
@property (nonatomic) unsigned long long reconciledStateVersion;
@property (nonatomic, retain) NSDictionary *remoteAssetsForPartialUpdate;
@property (nonatomic, retain) NPKPassSyncStateItem *syncStateItem;
@property (nonatomic, retain) NSString *uniqueID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)baseManifestHashForPartialUpdate;
- (unsigned long long)changeType;
- (id)changeUUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithChangeUUID:(id)arg1 reconciledStateHash:(id)arg2 reconciledStateVersion:(unsigned long long)arg3 changeType:(unsigned long long)arg4 uniqueID:(id)arg5 syncStateItem:(id)arg6 passData:(id)arg7;
- (id)initWithChangeUUID:(id)arg1 reconciledStateHash:(id)arg2 reconciledStateVersion:(unsigned long long)arg3 changeType:(unsigned long long)arg4 uniqueID:(id)arg5 syncStateItem:(id)arg6 passData:(id)arg7 baseManifestHashForPartialUpdate:(id)arg8 remoteAssetsForPartialUpdate:(id)arg9;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtoPassSyncChange:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToChange:(id)arg1;
- (bool)isEqualToChangeIgnoringUUID:(id)arg1;
- (id)passData;
- (id)protoPassSyncChange;
- (id)reconciledStateHash;
- (unsigned long long)reconciledStateVersion;
- (id)remoteAssetsForPartialUpdate;
- (void)setBaseManifestHashForPartialUpdate:(id)arg1;
- (void)setChangeType:(unsigned long long)arg1;
- (void)setChangeUUID:(id)arg1;
- (void)setPassData:(id)arg1;
- (void)setReconciledStateHash:(id)arg1;
- (void)setReconciledStateVersion:(unsigned long long)arg1;
- (void)setRemoteAssetsForPartialUpdate:(id)arg1;
- (void)setSyncStateItem:(id)arg1;
- (void)setUniqueID:(id)arg1;
- (id)syncStateItem;
- (id)uniqueID;

@end
