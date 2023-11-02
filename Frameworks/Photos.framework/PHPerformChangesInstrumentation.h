
@interface PHPerformChangesInstrumentation : NSObject {
    const char * _performChangesName;
    double  _serviceIsExecutingTimestamp;
    double  _serviceWillExecuteTimestamp;
    unsigned long long  _signpostId;
    NSUUID * _uuid;
}

- (void).cxx_destruct;
- (id)init;

@end
