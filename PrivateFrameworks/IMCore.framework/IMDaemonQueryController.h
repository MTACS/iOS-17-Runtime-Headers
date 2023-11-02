
@interface IMDaemonQueryController : NSObject {
    IMDaemonController * _daemonController;
    NSMutableDictionary * _queries;
}

@property (nonatomic, readonly) IMDaemonController *daemonController;
@property (nonatomic, readonly) NSMutableDictionary *queries;

- (void).cxx_destruct;
- (void)_completeQuery:(id)arg1 success:(bool)arg2 error:(id)arg3 userInfo:(id)arg4;
- (void)_daemonDisconnected:(id)arg1;
- (void)_validateOutstandingQueries;
- (void)completeQuery:(id)arg1;
- (void)completeQuery:(id)arg1 userInfo:(id)arg2;
- (id)daemonController;
- (void)failQuery:(id)arg1 error:(id)arg2;
- (id)initWithDaemonController:(id)arg1;
- (void)performQueryWithKey:(id)arg1 expectsSynchronousResult:(bool)arg2 block:(id /* block */)arg3;
- (void)performQueryWithKey:(id)arg1 expectsSynchronousResult:(bool)arg2 block:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)queries;

@end
