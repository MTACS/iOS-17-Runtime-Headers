
@protocol SBHardwareButtonServiceObserver <NSObject>

@required

- (void)buttonService:(SBHardwareButtonService *)arg1 buttonKind:(long long)arg2 eventsConsumedDidChange:(unsigned long long)arg3;

@end
