
@interface NACDaemonServer : NSObject {
    NACIDSServer * _idsServer;
}

+ (id)companionServer;
+ (id)gizmoServer;

- (void).cxx_destruct;

@end
