
@interface CKPendingConversation : CKConversation {
    IMService * _composeSendingService;
    bool  _noAvailableServices;
    IMService * _previousSendingService;
}

@property (nonatomic) IMService *composeSendingService;
@property (nonatomic) bool noAvailableServices;
@property (nonatomic) IMService *previousSendingService;

- (void).cxx_destruct;
- (id)composeSendingService;
- (id)deviceIndependentID;
- (bool)isAppleConversation;
- (bool)isMakoConversation;
- (bool)noAvailableServices;
- (id)previousSendingService;
- (void)refreshComposeSendingServiceForAddresses:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)refreshStatusForAddresses:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (id)sendingService;
- (void)setComposeSendingService:(id)arg1;
- (void)setNoAvailableServices:(bool)arg1;
- (void)setPreviousSendingService:(id)arg1;
- (id)uniqueIdentifier;

@end
