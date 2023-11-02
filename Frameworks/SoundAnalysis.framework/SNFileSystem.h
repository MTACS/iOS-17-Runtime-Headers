
@interface SNFileSystem : NSObject {
    void inflightTasks;
    void queue;
}

- (void).cxx_destruct;
- (void)addRequest:(id)arg1 completionHandler:(id /* block */)arg2 resultsHandler:(id /* block */)arg3;
- (id)init;
- (void)removeRequest:(id)arg1;

@end
