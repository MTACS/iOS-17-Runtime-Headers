
@interface SPRemoteInterfaceOpenParentRequest : NSObject {
    id /* block */  _reply;
    NSData * _userInfoData;
    bool  _waitingForReply;
}

@property (nonatomic, copy) id /* block */ reply;
@property (nonatomic, copy) NSData *userInfoData;
@property (nonatomic) bool waitingForReply;

- (void).cxx_destruct;
- (id /* block */)reply;
- (void)setReply:(id /* block */)arg1;
- (void)setUserInfoData:(id)arg1;
- (void)setWaitingForReply:(bool)arg1;
- (id)userInfoData;
- (bool)waitingForReply;

@end
