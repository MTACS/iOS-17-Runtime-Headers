
@interface _HDHealthServiceConnectionInfo : NSObject {
    NSData * _autoPairData;
    id /* block */  _characteristicsHandler;
    unsigned long long  _connectionOptions;
    long long  _connectionState;
    id /* block */  _dataHandler;
    long long  _mfaStatus;
    id /* block */  _mfaSuccessHandler;
    bool  _pairingAttempted;
    long long  _pairingState;
    NSUUID * _peripheralUUID;
    id /* block */  _sessionHandler;
    unsigned long long  _sessionIdentifier;
    double  _timeoutInterval;
    NSObject<OS_dispatch_source> * _timeoutTimer;
}

- (void).cxx_destruct;

@end
