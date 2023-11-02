
@interface RBLaunchdInterface : NSObject <RBLaunchdInterfacing>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)interface;

- (id)copyJobWithLabel:(id)arg1 domain:(id)arg2;
- (id)copyJobWithPid:(int)arg1;
- (id)copyJobsManagedBy:(id)arg1 error:(out id*)arg2;
- (id)currentDomain;
- (id)domainForPid:(int)arg1;
- (id)domainForUser:(unsigned int)arg1;
- (id)forJob:(id)arg1 createInstance:(unsigned char)arg2 properties:(id)arg3 error:(out id*)arg4;
- (id)instancePropertiesFromOverlay:(id)arg1;
- (id)jobWithPlist:(id)arg1;
- (id)jobWithPlist:(id)arg1 domain:(id)arg2;
- (id)propertiesForJob:(id)arg1 error:(out id*)arg2;
- (id)propertiesForPid:(int)arg1 error:(out id*)arg2;
- (id)submitExtension:(id)arg1 overlay:(id)arg2 domain:(id)arg3 error:(out id*)arg4;

@end
