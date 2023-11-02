
@protocol ARDaemonServiceDelegate <NSObject>

@required

- (void)serviceDidInterrupt:(id <ARServiceType>)arg1;
- (void)serviceDidInvalidate:(id <ARServiceType>)arg1;

@end
