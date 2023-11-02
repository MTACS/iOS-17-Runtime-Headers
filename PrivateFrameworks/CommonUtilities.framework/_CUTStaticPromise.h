
@interface _CUTStaticPromise : CUTPromise {
    CUTResult * _result;
    bool  _safe;
}

@property (nonatomic, retain) CUTResult *result;

- (void).cxx_destruct;
- (id)initWithResult:(id)arg1 safe:(bool)arg2;
- (void)registerResultBlock:(id /* block */)arg1;
- (id)result;
- (void)setResult:(id)arg1;
- (id)then:(id /* block */)arg1;

@end
