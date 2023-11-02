
@interface WBSHistoryServiceForTesting : WBSHistoryService {
    NSXPCListener * _listener;
}

- (void).cxx_destruct;
- (id)_createListener;
- (id)connectWithClass:(Class)arg1;
- (id)init;

@end
