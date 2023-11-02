
@interface HTHangReporterService : NSObject {
    NSObject<OS_xpc_object> * _hangReporterConnection;
}

- (void).cxx_destruct;
- (void)getProcessingHangsWithCompletion:(id /* block */)arg1;
- (id)init;

@end
