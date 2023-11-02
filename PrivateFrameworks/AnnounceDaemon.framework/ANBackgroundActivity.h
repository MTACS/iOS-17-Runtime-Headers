
@interface ANBackgroundActivity : NSObject <ANBackgroundActivityProtocol> {
    NSBackgroundActivityScheduler * _backgroundActivity;
}

@property (nonatomic, readonly) NSBackgroundActivityScheduler *backgroundActivity;

- (void).cxx_destruct;
- (id)backgroundActivity;
- (id)init;
- (void)scheduleWithBlock:(id /* block */)arg1;
- (bool)shouldDefer;

@end
