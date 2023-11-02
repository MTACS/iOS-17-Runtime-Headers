
@interface CNKScreenSharingStateMonitorFactory : NSObject

@property (nonatomic, readonly) <CNKScreenSharingStateMonitorProtocol> *sharedMonitor;

- (id)init;
- (id)makeScreenSharingStateMonitorWithCall:(id)arg1;
- (id)sharedMonitor;

@end
