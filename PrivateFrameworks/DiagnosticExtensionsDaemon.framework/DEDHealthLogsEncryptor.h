
@interface DEDHealthLogsEncryptor : NSObject <DEDEncryptor>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)encryptLogsAtPath:(id)arg1 outputDirectory:(id)arg2 withMetadata:(id)arg3;
- (id)encryptLogsAtPath:(id)arg1 outputDirectory:(id)arg2 withPublicKey:(id)arg3;

@end
