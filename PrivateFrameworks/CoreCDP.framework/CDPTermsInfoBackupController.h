
@interface CDPTermsInfoBackupController : NSObject {
    CDPDaemonConnection * _daemonConn;
}

@property (nonatomic, retain) CDPDaemonConnection *daemonConn;

- (void).cxx_destruct;
- (id)daemonConn;
- (void)fetchTermsAcceptanceForAccount:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)saveTermsAcceptance:(id)arg1 completion:(id /* block */)arg2;
- (void)setDaemonConn:(id)arg1;

@end
