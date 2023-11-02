
@interface CRXFCalibrationDataDownloader : NSObject {
    NSXPCConnection * _connection;
    NSMutableDictionary * _downloads;
    NSDictionary * _fetchOptions;
    NSObject<OS_os_log> * _log;
    CRXUNetworkReachability * _networkReachability;
    unsigned long long  _nextDownloadID;
    double  _timeout;
}

- (void).cxx_destruct;
- (unsigned long long)addDownloadWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)downloadACCsForSerialNumbers:(id)arg1 completionQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)downloadCalibrationDataForACCPayload:(id)arg1 completionQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)downloadCalibrationDataForASAKey:(id)arg1 completionQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchUserInfoWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)finishDownloadWithID:(unsigned long long)arg1 data:(id)arg2 error:(id)arg3;
- (id)initWithServer:(unsigned long long)arg1 serverVersion:(id)arg2 timeout:(double)arg3;
- (void)tearDown;

@end
