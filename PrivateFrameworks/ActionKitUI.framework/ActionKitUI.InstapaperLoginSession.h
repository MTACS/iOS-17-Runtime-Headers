
@interface ActionKitUI.InstapaperLoginSession : NSObject <IKEngineDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  continuation;
    void engine;
    void password;
    void username;
}

- (void).cxx_destruct;
- (void)engine:(id)arg1 connection:(id)arg2 didReceiveAuthToken:(id)arg3 andTokenSecret:(id)arg4;
- (void)engine:(id)arg1 didFailConnection:(id)arg2 error:(id)arg3;
- (id)init;

@end
