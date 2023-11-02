
@interface IRDaemon : NSObject {
    IRXPCServicesManager * _xpcManager;
}

- (void).cxx_destruct;
- (void)_startServices;
- (id)init;
- (void)run;

@end
