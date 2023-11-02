
@interface PLSandboxHelper : NSObject

+ (bool)fileURLHasSecurityScope:(id)arg1;
+ (bool)processCanReadSandboxForPath:(id)arg1;
+ (bool)processCanWriteSandboxForPath:(id)arg1;
+ (bool)processWithID:(int)arg1 canReadSandboxForPath:(id)arg2;
+ (bool)processWithID:(int)arg1 canWriteSandboxForPath:(id)arg2;

@end
