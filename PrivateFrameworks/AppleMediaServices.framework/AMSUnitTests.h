
@interface AMSUnitTests : NSObject

+ (id)_encryptionKeys;
+ (void)_sync:(id /* block */)arg1;
+ (id)encryptionKeyForDataProtectionClass:(unsigned long long)arg1;
+ (bool)isRunningUnitTests;
+ (void)setEncryptionKey:(id)arg1 forDataProtectionClass:(unsigned long long)arg2;

@end
