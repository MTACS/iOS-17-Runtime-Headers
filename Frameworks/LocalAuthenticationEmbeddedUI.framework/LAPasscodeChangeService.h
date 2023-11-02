
@interface LAPasscodeChangeService : NSObject {
    <LAPasscodeChangeEnvironment> * _env;
}

- (void).cxx_destruct;
- (void)_startOperation:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithEnvironment:(id)arg1;
- (void)startInParentVC:(id)arg1 completion:(id /* block */)arg2;
- (void)startInParentVC:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;

@end
