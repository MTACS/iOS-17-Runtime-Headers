
@interface CDPUIWalrusStatusChangeModel : NSObject <CDPUIStatusChangeModel> {
    CDPContext * _context;
    unsigned long long  _targetStatus;
    <CDPWalrusStatusProvider> * _walrusStatusProvider;
    <CDPWalrusStatusUpdater> * _walrusStatusUpdater;
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
- (bool)_hasLocalSecret;
- (void)_reportUserChoice:(unsigned long long)arg1 error:(id)arg2;
- (void)_updateUnderlyingValue:(id /* block */)arg1;
- (id)cancelButtonText;
- (id)initWithTargetStatus:(unsigned long long)arg1 statusProvider:(id)arg2 statusUpdater:(id)arg3;
- (id)initWithTargetStatus:(unsigned long long)arg1 statusProvider:(id)arg2 statusUpdater:(id)arg3 context:(id)arg4;
- (id)messageText;
- (id)primaryButtonText;
- (unsigned long long)targetStatus;
- (id)titleText;

@end
