
@interface IDSQUICConnectionIDs : NSObject {
    unsigned int  _localAVCConnectionID;
    unsigned int  _localIDSConnectionID;
    unsigned int  _remoteAVCConnectionID;
    unsigned int  _remoteIDSConnectionID;
}

@property (nonatomic) unsigned int localAVCConnectionID;
@property (nonatomic) NSData *localAVCConnectionIDData;
@property (nonatomic) unsigned int localIDSConnectionID;
@property (nonatomic) NSData *localIDSConnectionIDData;
@property (nonatomic) unsigned int remoteAVCConnectionID;
@property (nonatomic) NSData *remoteAVCConnectionIDData;
@property (nonatomic) unsigned int remoteIDSConnectionID;
@property (nonatomic) NSData *remoteIDSConnectionIDData;

- (unsigned int)_convertConnectionIDDataToUInt32:(id)arg1;
- (unsigned int)_generateUniqueQUICConnectionID:(unsigned int)arg1 usedLocalConnectionIDs:(id*)arg2;
- (id)_getConnectionIDData:(unsigned int)arg1;
- (id)_getConnectionIDDispatchData:(unsigned int)arg1;
- (id)description;
- (id)generateLocalIDs:(id*)arg1;
- (bool)isComplete;
- (unsigned int)localAVCConnectionID;
- (id)localAVCConnectionIDData;
- (id)localAVCConnectionIDDispatchData;
- (unsigned int)localIDSConnectionID;
- (id)localIDSConnectionIDData;
- (id)localIDSConnectionIDDispatchData;
- (unsigned int)remoteAVCConnectionID;
- (id)remoteAVCConnectionIDData;
- (id)remoteAVCConnectionIDDispatchData;
- (unsigned int)remoteIDSConnectionID;
- (id)remoteIDSConnectionIDData;
- (id)remoteIDSConnectionIDDispatchData;
- (void)setLocalAVCConnectionID:(unsigned int)arg1;
- (void)setLocalAVCConnectionIDData:(id)arg1;
- (void)setLocalIDSConnectionID:(unsigned int)arg1;
- (void)setLocalIDSConnectionIDData:(id)arg1;
- (void)setRemoteAVCConnectionID:(unsigned int)arg1;
- (void)setRemoteAVCConnectionIDData:(id)arg1;
- (void)setRemoteIDSConnectionID:(unsigned int)arg1;
- (void)setRemoteIDSConnectionIDData:(id)arg1;

@end
