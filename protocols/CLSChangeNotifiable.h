
@protocol CLSChangeNotifiable <CLSClientCancelable>

@required

- (oneway void)clientRemote_itemChanged:(unsigned long long)arg1;

@end
