
@interface BAAppStoreClient : NSObject {
    BAAgentSystemProxy * _systemProxy;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (bool)performEventWithDescriptor:(id)arg1 error:(id*)arg2;
- (bool)prepareForAppInstallWithDescriptor:(id)arg1 error:(id*)arg2;

@end
