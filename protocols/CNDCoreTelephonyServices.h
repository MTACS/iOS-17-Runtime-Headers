
@protocol CNDCoreTelephonyServices <NSObject>

@required

- (struct __CTServerConnection { }*)_CTServerConnectionCreateOnTargetQueue:(void *)arg1 :(void *)arg2 :(void *)arg3 :(void *)arg4; // needs 4 arg types, found 10: struct __CFAllocator { }*, struct __CFString { }*, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct __CFString { }*, struct __CFDictionary { }*, void*
- (void)_CTServerConnectionRegisterBlockForNotification:(void *)arg1 :(void *)arg2 :(void *)arg3; // needs 3 arg types, found 8: struct __CTServerConnection { }*, struct __CFString { }*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct __CFDictionary { }*, void*
- (void)_CTServerConnectionUnregisterForNotification:(struct __CTServerConnection { }*)arg1 :(struct __CFString { }*)arg2;

@end
