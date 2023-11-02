
@interface TPPeer : NSObject {
    TPPeerDynamicInfo * _dynamicInfo;
    TPPeerPermanentInfo * _permanentInfo;
    TPPeerStableInfo * _stableInfo;
}

@property (nonatomic, readonly) TPPeerDynamicInfo *dynamicInfo;
@property (nonatomic, readonly) NSString *peerID;
@property (nonatomic, readonly) TPPeerPermanentInfo *permanentInfo;
@property (nonatomic, readonly) TPPeerStableInfo *stableInfo;
@property (nonatomic, readonly) NSSet *trustedPeerIDs;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dynamicInfo;
- (id)initWithPermanentInfo:(id)arg1;
- (id)initWithPermanentInfo:(id)arg1 stableInfo:(id)arg2 dynamicInfo:(id)arg3;
- (id)peerID;
- (id)peerWithUpdatedDynamicInfo:(id)arg1 error:(id*)arg2;
- (id)peerWithUpdatedStableInfo:(id)arg1 error:(id*)arg2;
- (id)permanentInfo;
- (id)stableInfo;
- (id)trustedPeerIDs;

@end
