
@interface CDPRecoveryKeyEntryViewModel : NSObject {
    id /* block */  _completionHandler;
    CDPContext * _context;
    CDPEscapeOption * _custodianRecoveryEscapeOption;
    CDPRemoteValidationEscapeOffer * _deleteiCloudDataEscapeOffer;
    bool  _isFooterForMismatchRepairFlow;
    bool  _isFooterForVerifyFlow;
    bool  _isWalrusEnabled;
    int  _mode;
    <CDPRemoteDeviceSecretValidatorProtocol> * _secretValidator;
    bool  _shouldSuppressCancelButton;
    <CDPRecoveryKeyValidator> * _validator;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) CDPContext *context;
@property (nonatomic, retain) CDPEscapeOption *custodianRecoveryEscapeOption;
@property (nonatomic, retain) CDPRemoteValidationEscapeOffer *deleteiCloudDataEscapeOffer;
@property (nonatomic, readonly) bool isFooterButtonForOtherRecoveryOptions;
@property bool isFooterForMismatchRepairFlow;
@property bool isFooterForVerifyFlow;
@property (nonatomic) bool isWalrusEnabled;
@property (readonly) int mode;
@property bool shouldSuppressCancelButton;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)context;
- (id)custodianRecoveryEscapeOption;
- (id)deleteiCloudDataEscapeOffer;
- (id)footerButtonTitle;
- (id)footerLabelText;
- (void)handleCancel;
- (void)handleForgotRecoveryKeyWithCDPStateError:(long long)arg1;
- (void)handleNoRecoveryKeyWithCDPStateError:(long long)arg1;
- (id)headerSubtitle;
- (id)headerTitle;
- (id)initWithContext:(id)arg1 validator:(id)arg2;
- (id)initWithContext:(id)arg1 validator:(id)arg2 mode:(int)arg3;
- (bool)isDataRecoveryFlow;
- (bool)isFooterButtonForOtherRecoveryOptions;
- (bool)isFooterForMismatchRepairFlow;
- (bool)isFooterForVerifyFlow;
- (bool)isWalrusEnabled;
- (bool)mandatesRecoveryKey;
- (int)mode;
- (id)placeholderText;
- (void)processCollectedRecoveryKey:(id)arg1 completion:(id /* block */)arg2;
- (id)recoveryKey;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setContext:(id)arg1;
- (void)setCustodianRecoveryEscapeOption:(id)arg1;
- (void)setDeleteiCloudDataEscapeOffer:(id)arg1;
- (void)setIsFooterForMismatchRepairFlow:(bool)arg1;
- (void)setIsFooterForVerifyFlow:(bool)arg1;
- (void)setIsWalrusEnabled:(bool)arg1;
- (void)setShouldSuppressCancelButton:(bool)arg1;
- (bool)shouldSuppressCancelButton;
- (bool)supportsRKRecovery;

@end
