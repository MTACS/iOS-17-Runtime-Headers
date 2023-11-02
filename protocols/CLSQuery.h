
@protocol CLSQuery <CLSClientRemoteObject, CLSChangeNotifiable>

@required

- (oneway void)clientRemote_finishWithOffset:(unsigned long long)arg1 error:(NSError *)arg2;

@end
