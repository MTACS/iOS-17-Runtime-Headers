
@interface SNFileServer : NSObject {
    void link;
    void queue;
    void rootDirectory;
    void server;
}

+ (id)createDefaultServer;

- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithRootDirectory:(id)arg1;

@end
