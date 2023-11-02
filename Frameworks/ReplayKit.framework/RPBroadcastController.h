
@interface RPBroadcastController : NSObject {
    NSString * _broadcastExtensionBundleID;
    NSString * _broadcastExtensionBundleIdentifier;
    <RPBroadcastControllerDelegate> * _delegate;
    NSDictionary * _serviceInfo;
}

@property (nonatomic, readonly) NSString *broadcastExtensionBundleID;
@property (nonatomic, retain) NSString *broadcastExtensionBundleIdentifier;
@property (nonatomic, retain) NSURL *broadcastURL;
@property (getter=isBroadcasting, nonatomic, readonly) bool broadcasting;
@property (nonatomic) <RPBroadcastControllerDelegate> *delegate;
@property (getter=isPaused, nonatomic, readonly) bool paused;
@property (nonatomic, retain) NSDictionary *serviceInfo;

- (void).cxx_destruct;
- (id)broadcastExtensionBundleID;
- (id)broadcastExtensionBundleIdentifier;
- (id)broadcastURL;
- (id)delegate;
- (void)finishBroadcastWithHandler:(id /* block */)arg1;
- (void)finishSystemBroadcastWithHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithCurrentSession;
- (id)initWithExtensionBundleID:(id)arg1 broadcastURL:(id)arg2;
- (bool)isBroadcasting;
- (bool)isPaused;
- (void)pauseBroadcast;
- (void)resumeBroadcast;
- (id)serviceInfo;
- (void)setBroadcastExtensionBundleIdentifier:(id)arg1;
- (void)setBroadcastURL:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setServiceInfo:(id)arg1;
- (void)startBroadcastWithHandler:(id /* block */)arg1;
- (void)startSystemBroadcastWithHandler:(id /* block */)arg1;

@end
