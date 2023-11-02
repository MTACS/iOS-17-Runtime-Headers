
@interface PreviewShellKit.ListenerDelegate : NSObject <BSServiceConnectionListenerDelegate> {
    void connectionHandler;
}

- (void).cxx_destruct;
- (id)init;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;

@end
