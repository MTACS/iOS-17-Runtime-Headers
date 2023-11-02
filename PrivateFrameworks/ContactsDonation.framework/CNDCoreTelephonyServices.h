
@interface CNDCoreTelephonyServices : NSObject <CNDCoreTelephonyServices>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (struct __CTServerConnection { }*)_CTServerConnectionCreateOnTargetQueue:(struct __CFAllocator { }*)arg1 :(struct __CFString { }*)arg2 :(id)arg3 :(id /* block */)arg4;
- (void)_CTServerConnectionRegisterBlockForNotification:(struct __CTServerConnection { }*)arg1 :(struct __CFString { }*)arg2 :(id /* block */)arg3;
- (void)_CTServerConnectionUnregisterForNotification:(struct __CTServerConnection { }*)arg1 :(struct __CFString { }*)arg2;

@end
