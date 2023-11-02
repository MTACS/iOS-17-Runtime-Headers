
@interface CKVReplicatedEntityUpdateRecord : NSObject {
    void addedLocalItems;
    void allLocalItems;
    void allProvenance;
    void allTimestamps;
    void changeOption;
    void contentHash;
    void deltaAddedProvenance;
    void deltaRemovedProvenance;
    void localDeviceChanges;
    void removedLocalItems;
}

@property (nonatomic, readonly) long long hash;

- (void).cxx_destruct;
- (id)contentIdentifier;
- (id)getAddedLocalDeviceVariants;
- (id)getAllDeviceProvenance;
- (id)getAllLocalDeviceVariants;
- (unsigned short)getChangeOption;
- (id)getDeltaAddedProvenence;
- (id)getDeltaRemovedProvenance;
- (id)getRemovedLocalDeviceVariants;
- (bool)hasLocalDeviceChanges;
- (long long)hash;
- (id)init;
- (id)initWith:(id)arg1 changeOption:(unsigned short)arg2 allProvenance:(id)arg3 deltaAddedProvenance:(id)arg4 deltaRemovedProvenance:(id)arg5 localDeviceChanges:(bool)arg6 allTimestamps:(id)arg7;
- (bool)isEqual:(id)arg1;

@end
