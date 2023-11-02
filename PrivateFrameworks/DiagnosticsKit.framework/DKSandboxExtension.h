
@interface DKSandboxExtension : NSObject

+ (id)consumeSandboxExtensionWithToken:(id)arg1 error:(id*)arg2;
+ (id)consumeSandboxExtensionsWithTokens:(id)arg1;
+ (id)issueSandboxExtensionForFile:(id)arg1 toAuditToken:(struct { unsigned int x1[8]; })arg2 error:(id*)arg3;
+ (id)issueSandboxExtensionsForFiles:(id)arg1 toAuditToken:(struct { unsigned int x1[8]; })arg2;
+ (bool)releaseSandboxExtensionWithHandle:(id)arg1 error:(id*)arg2;
+ (void)releaseSandboxExtensionsWithHandles:(id)arg1;

@end
