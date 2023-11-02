
@protocol HMDarwinNotificationProvider <NSObject>

@required

- (unsigned int)notifyCancel:(int)arg1;
- (unsigned int)notifyGetState:(int)arg1 state:(unsigned long long*)arg2;
- (bool)notifyIsValidToken:(int)arg1;
- (unsigned int)notifyPost:(const char *)arg1;
- (unsigned int)notifyRegisterCheck:(const char *)arg1 outToken:(int*)arg2;
- (unsigned int)notifyRegisterDispatch:(void *)arg1 outToken:(void *)arg2 queue:(void *)arg3 handler:(void *)arg4; // needs 4 arg types, found 9: const char *, int*, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (unsigned int)notifySetState:(int)arg1 state:(unsigned long long)arg2;

@end
