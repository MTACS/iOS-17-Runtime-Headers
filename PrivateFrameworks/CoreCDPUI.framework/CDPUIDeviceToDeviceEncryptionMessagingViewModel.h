
@interface CDPUIDeviceToDeviceEncryptionMessagingViewModel : NSObject <CDPUIDeviceToDeviceEncryptionMessagingViewModelProtocol> {
    CDPUIDeviceToDeviceEncryptionFlowContext * _context;
    bool  _hasLocalSecret;
    bool  _is2FA;
}

@property (readonly) CDPUIDeviceToDeviceEncryptionFlowContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool hasLocalSecret;
@property (readonly) unsigned long long hash;
@property (readonly) bool is2FA;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cancelTitle;
- (id)context;
- (id)continueTitle;
- (bool)hasLocalSecret;
- (id)initWithContext:(id)arg1 is2FA:(bool)arg2 hasLocalSecret:(bool)arg3;
- (bool)is2FA;
- (id)message;
- (id)title;

@end
