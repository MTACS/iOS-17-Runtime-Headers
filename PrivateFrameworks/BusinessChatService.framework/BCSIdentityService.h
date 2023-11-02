
@interface BCSIdentityService : NSObject <BCSIdentityServiceProtocol> {
    <BCSIDSQueryControllerProtocol> * _IDSQueryController;
    <BCSIDSServiceFactoryProtocol> * _IDSServiceFactory;
    <BCSIdentityAccountProtocol> * _businessChatAccount;
    NSMutableDictionary * _idStatusCompletionBlocks;
    NSObject<OS_dispatch_queue> * _serialDispatchQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)businessChatAccount;
- (void)refreshIDStatusForBizID:(id)arg1 completion:(id /* block */)arg2;

@end
