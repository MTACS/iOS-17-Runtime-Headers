
@interface SiriCoreSiriDaemonLaunchContext : NSObject {
    long long  _daemonType;
}

@property (nonatomic) long long daemonType;

- (long long)daemonType;
- (id)initWithLaunchArguments:(id)arg1;
- (void)setDaemonType:(long long)arg1;

@end
