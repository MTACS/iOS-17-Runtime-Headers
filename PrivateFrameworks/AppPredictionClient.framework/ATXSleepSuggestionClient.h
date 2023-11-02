
@interface ATXSleepSuggestionClient : NSObject <ATXSleepSuggestionInterface> {
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (id)init;
- (void)predictedSleepSuggestionWithCompletionHandler:(id /* block */)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;

@end
