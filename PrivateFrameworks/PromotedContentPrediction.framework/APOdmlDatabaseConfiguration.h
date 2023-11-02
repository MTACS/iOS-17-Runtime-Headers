
@interface APOdmlDatabaseConfiguration : APOdmlSingleton {
    bool  _isDaemonProcess;
}

@property (nonatomic, readonly) bool isDaemonProcess;

+ (id)sharedInstance;

- (id)init;
- (bool)isDaemonProcess;
- (void)setProcessToDaemon;

@end
