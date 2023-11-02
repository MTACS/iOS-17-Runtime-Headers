
@interface HMDarwinNotificationProvider : HMFObject <HMDarwinNotificationProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned int)notifyCancel:(int)arg1;
- (unsigned int)notifyGetState:(int)arg1 state:(unsigned long long*)arg2;
- (bool)notifyIsValidToken:(int)arg1;
- (unsigned int)notifyPost:(const char *)arg1;
- (unsigned int)notifyRegisterCheck:(const char *)arg1 outToken:(int*)arg2;
- (unsigned int)notifyRegisterDispatch:(const char *)arg1 outToken:(int*)arg2 queue:(id)arg3 handler:(id /* block */)arg4;
- (unsigned int)notifySetState:(int)arg1 state:(unsigned long long)arg2;

@end
