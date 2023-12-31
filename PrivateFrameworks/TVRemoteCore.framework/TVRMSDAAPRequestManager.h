
@interface TVRMSDAAPRequestManager : NSObject {
    <TVRMSDAAPRequestManagerDelegate> * _delegate;
    TVRMSFairPlaySession * _fairPlaySession;
    NSString * _homeSharingGroupKey;
    NSString * _hostName;
    NSString * _pairingGUID;
    long long  _port;
    long long  _sessionIdentifier;
    NSURLSession * _urlSession;
}

@property (nonatomic) <TVRMSDAAPRequestManagerDelegate> *delegate;
@property (nonatomic, retain) TVRMSFairPlaySession *fairPlaySession;
@property (nonatomic, copy) NSString *homeSharingGroupKey;
@property (nonatomic, copy) NSString *hostName;
@property (nonatomic, copy) NSString *pairingGUID;
@property (nonatomic) long long port;
@property (nonatomic) long long sessionIdentifier;

- (void).cxx_destruct;
- (id)delegate;
- (id)fairPlaySession;
- (id)homeSharingGroupKey;
- (id)hostName;
- (id)init;
- (id)pairingGUID;
- (long long)port;
- (id)requestControlCommand:(id)arg1 text:(id)arg2 data:(id)arg3 controlValue:(long long)arg4 promptRevision:(long long)arg5 completionHandler:(id /* block */)arg6;
- (id)requestControlCommand:(id)arg1 text:(id)arg2 promptRevision:(long long)arg3 completionHandler:(id /* block */)arg4;
- (id)requestWithPath:(id)arg1 method:(id)arg2 postData:(id)arg3 queryArgs:(id)arg4 completionHandler:(id /* block */)arg5;
- (long long)sessionIdentifier;
- (void)setDelegate:(id)arg1;
- (void)setFairPlaySession:(id)arg1;
- (void)setHomeSharingGroupKey:(id)arg1;
- (void)setHostName:(id)arg1;
- (void)setPairingGUID:(id)arg1;
- (void)setPort:(long long)arg1;
- (void)setSessionIdentifier:(long long)arg1;

@end
