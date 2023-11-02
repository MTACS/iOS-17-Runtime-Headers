
@interface CKVocabularyAdminEventSimulator : NSObject {
    NSObject<CKVAdminService> * _adminService;
    bool  _simulationFinished;
    double  _timeout;
}

- (void).cxx_destruct;
- (void)dealloc;
- (long long)finish;
- (void)handleTask:(unsigned short)arg1 reason:(unsigned short)arg2 completion:(id /* block */)arg3;
- (id)initWithAdminService:(id)arg1;
- (id)initWithAdminService:(id)arg1 timeout:(double)arg2;

@end
