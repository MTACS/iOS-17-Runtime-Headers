
@interface CBSpatialInteractionPeerInfoClient : NSObject {
    unsigned int  _peerID;
    NSData * _tokenData;
    NSDictionary * _userInfo;
    unsigned int  _uwbTokenFlags;
}

@property (nonatomic) unsigned int peerID;
@property (nonatomic, copy) NSData *tokenData;
@property (nonatomic, copy) NSDictionary *userInfo;
@property (nonatomic) unsigned int uwbTokenFlags;

- (void).cxx_destruct;
- (unsigned int)peerID;
- (void)setPeerID:(unsigned int)arg1;
- (void)setTokenData:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setUwbTokenFlags:(unsigned int)arg1;
- (id)tokenData;
- (id)userInfo;
- (unsigned int)uwbTokenFlags;

@end
