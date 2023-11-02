
@interface LNAppContextWrapper : NSObject {
    LNAppContext * _appContext;
}

@property (nonatomic, readonly) LNAppContext *appContext;

- (void).cxx_destruct;
- (id)appContext;
- (id)init;
- (void)performAction:(id)arg1 options:(id)arg2 reportingProgress:(id)arg3 delegate:(id)arg4 auditToken:(struct { unsigned int x1[8]; })arg5 completionHandler:(id /* block */)arg6;

@end
