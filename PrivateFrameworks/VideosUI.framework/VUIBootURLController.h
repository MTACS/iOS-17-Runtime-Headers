
@interface VUIBootURLController : NSObject {
    NSURL * _localAppURL;
}

@property (nonatomic, retain) NSURL *localAppURL;

- (void).cxx_destruct;
- (void)fetchBootURLWithCompletionHandler:(id /* block */)arg1;
- (void)fetchBootURLWithUserDefaults:(id)arg1 bootURLKey:(id)arg2 bagURLKey:(id)arg3 bundle:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)init;
- (id)initWithLocalAppURL:(id)arg1;
- (id)localAppURL;
- (void)setLocalAppURL:(id)arg1;

@end
