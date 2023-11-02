
@interface _ANESandboxingHelper : NSObject

+ (bool)canAccessPathAt:(id)arg1 methodName:(id)arg2 error:(id*)arg3;
+ (long long)consumeSandboxExtension:(id)arg1 forModel:(id)arg2 error:(id*)arg3;
+ (void)initialize;
+ (id)issueSandboxExtensionForModel:(id)arg1 error:(id*)arg2;
+ (bool)releaseSandboxExtension:(id)arg1 handle:(long long)arg2;
+ (id)sandboxExtensionPathForModelURL:(id)arg1;

@end
