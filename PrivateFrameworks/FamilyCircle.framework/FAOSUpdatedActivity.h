
@interface FAOSUpdatedActivity : NSObject {
    void activity;
    void activityProvider;
}

- (void).cxx_destruct;
- (void)checkinWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (id)init;
- (id)initWithHeartbeatActivityHandler:(id /* block */)arg1;
- (void)unregister;

@end
