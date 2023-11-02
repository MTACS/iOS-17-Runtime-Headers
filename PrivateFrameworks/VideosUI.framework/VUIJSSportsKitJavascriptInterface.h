
@interface VUIJSSportsKitJavascriptInterface : NSObject {
    void context;
}

@property (nonatomic, readonly) JSContext *context;

- (void).cxx_destruct;
- (id)checkActivityExistsFor:(id)arg1;
- (id)context;
- (id)init;
- (id)initWithContext:(id)arg1;
- (void)registerWithRequest:(id)arg1 successHandler:(id /* block */)arg2 errorHandler:(id /* block */)arg3;

@end
