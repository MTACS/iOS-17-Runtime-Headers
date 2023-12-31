
@protocol CDPRecoveryKeyUIProvider <NSObject>

@optional

- (void)cdpContext:(void *)arg1 presentRecoveryKeyWithValidator:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CDPContext *, <CDPRecoveryKeyValidator> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)cdpContext:(void *)arg1 promptForRecoveryKeyWithSecretValidator:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CDPContext *, <CDPRemoteDeviceSecretValidatorProtocol> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)cdpContext:(void *)arg1 promptForRecoveryKeyWithValidator:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CDPContext *, <CDPRecoveryKeyValidator> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
