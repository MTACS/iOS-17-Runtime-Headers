
@interface SBSVolumeEventMonitor : NSObject {
    NSXPCConnection * _sbConnection;
    <SBSVolumeEventMonitorImplementer> * _sbProxy;
}

@property (retain) NSXPCConnection *sbConnection;
@property (readonly) <SBSVolumeEventMonitorImplementer> *sbProxy;

- (void).cxx_destruct;
- (void)fetchLatestEvents:(long long)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithTarget:(id)arg1;
- (id)sbConnection;
- (id)sbProxy;
- (void)setSbConnection:(id)arg1;

@end
