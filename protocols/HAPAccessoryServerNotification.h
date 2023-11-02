
@protocol HAPAccessoryServerNotification <HMFObject>

@required

- (void)indicateNotificationFromServer:(HAPAccessoryServer *)arg1 notifyType:(unsigned long long)arg2 withDictionary:(NSDictionary *)arg3;

@optional

- (NSNumber *)hapInstanceId;

@end
