
@protocol InterfaceListenerDelegate

@optional

- (void)interfaceStateDidChangeWithWifiUp:(bool)arg1 cellUp:(bool)arg2;
- (void)networkStateDidChange;

@end
