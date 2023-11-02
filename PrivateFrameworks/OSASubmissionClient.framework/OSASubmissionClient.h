
@interface OSASubmissionClient : NSObject <OSASubmissionServices> {
    NSXPCConnection * _connection;
    <OSASubmissionServices> * _synchRemoteObjectProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithErrorHandler:(id /* block */)arg1;
- (bool)submit;
- (bool)submitWithOptions:(id)arg1;
- (void)submitWithOptions:(id)arg1 resultsCallback:(id /* block */)arg2;

@end
