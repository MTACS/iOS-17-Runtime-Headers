
@interface PSGInternalClient : NSObject {
    _PASXPCClientHelper * _clientHelper;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_remoteObjectProxy;
- (id)init;
- (id)sysdiagnoseInformationWithError:(id*)arg1;

@end
