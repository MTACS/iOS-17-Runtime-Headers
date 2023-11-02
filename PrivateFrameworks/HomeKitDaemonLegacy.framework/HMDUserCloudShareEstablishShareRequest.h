
@interface HMDUserCloudShareEstablishShareRequest : HMDUserCloudShareRequest {
    id /* block */  _completion;
    NSData * _encodedShareURL;
    HMDUser * _fromUser;
    NSData * _shareToken;
    HMDUser * _toUser;
}

@property (readonly, copy) id /* block */ completion;
@property (readonly) NSData *encodedShareURL;
@property (readonly) HMDUser *fromUser;
@property (readonly) NSData *shareToken;
@property (readonly) HMDUser *toUser;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)description;
- (id)encodedShareURL;
- (id)fromUser;
- (id)initWithHome:(id)arg1 fromUser:(id)arg2 toUser:(id)arg3 encodedShareURL:(id)arg4 shareToken:(id)arg5 containerID:(id)arg6 currentDate:(id)arg7 completion:(id /* block */)arg8;
- (id)shareToken;
- (id)toUser;

@end
