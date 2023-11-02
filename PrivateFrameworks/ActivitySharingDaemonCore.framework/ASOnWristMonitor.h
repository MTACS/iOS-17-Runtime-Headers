
@interface ASOnWristMonitor : NSObject {
    <ASOnWristMonitorDelegate> * _delegate;
}

@property (nonatomic) <ASOnWristMonitorDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)getWristState:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;

@end
