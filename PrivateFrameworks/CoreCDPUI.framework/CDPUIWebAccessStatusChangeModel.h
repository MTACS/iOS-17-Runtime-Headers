
@interface CDPUIWebAccessStatusChangeModel : NSObject <CDPUIStatusChangeModel> {
    unsigned long long  _targetStatus;
    <CDPWalrusStatusProvider> * _walrusStatusProvider;
    <CDPWebAccessStatusProvider> * _webAccessStatusProvider;
    <CDPWebAccessStatusUpdater> * _webAccessStatusUpdater;
}

@property (nonatomic, readonly) NSString *cancelButtonText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *messageText;
@property (nonatomic, readonly) NSString *primaryButtonText;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long targetStatus;
@property (nonatomic, readonly) NSString *titleText;

- (void).cxx_destruct;
- (void)_checkCurrentStatus:(id /* block */)arg1;
- (void)_updateUnderlyingValue:(id /* block */)arg1;
- (id)cancelButtonText;
- (id)initWithTargetStatus:(unsigned long long)arg1 statusProvider:(id)arg2 statusUpdater:(id)arg3 walrusStatusProvider:(id)arg4;
- (id)messageText;
- (id)primaryButtonText;
- (unsigned long long)targetStatus;
- (id)titleText;

@end
