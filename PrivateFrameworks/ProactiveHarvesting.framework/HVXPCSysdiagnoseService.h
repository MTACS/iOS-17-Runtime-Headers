
@interface HVXPCSysdiagnoseService : NSObject {
    _PASXPCClientHelper * _helper;
}

- (void).cxx_destruct;
- (id)init;
- (id)synchronousProxy;
- (id)sysdiagnoseStringWithError:(id*)arg1;

@end
