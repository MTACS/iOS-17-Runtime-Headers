
@interface BMDataProtection : NSObject

+ (int)biomeProtectionClassToOSProtectionClass:(unsigned long long)arg1;
+ (bool)canOpenFilesForProtectionClass:(unsigned long long)arg1;
+ (bool)canOpenFilesForProtectionClass:(unsigned long long)arg1 createNewFile:(bool)arg2;
+ (bool)losesReadAccessOnLock:(unsigned long long)arg1;
+ (bool)requiresUnlockToOpen:(unsigned long long)arg1;

@end
