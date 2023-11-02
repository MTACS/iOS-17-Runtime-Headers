
@interface FeaturesDaemon : NSObject {
    DaemonController * _controller;
}

@property (nonatomic, retain) DaemonController *controller;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)controller;
- (id)init;
- (void)setController:(id)arg1;
- (void)start;

@end
