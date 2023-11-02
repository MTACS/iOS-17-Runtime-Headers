
@interface ECSMTPAccount : ECAccount

+ (id)standardPorts;
+ (id)standardSSLPorts;

- (id)_hostnameFromParentAccount:(id)arg1;
- (long long)defaultPortNumber;
- (id)portNumberObject;
- (id)usesSSLObject;

@end
