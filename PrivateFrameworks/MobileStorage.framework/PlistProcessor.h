
@interface PlistProcessor : NSObject

+ (id)sharedPlistProcessor;

- (id)copyAndFixPlist:(id)arg1 forMountPoint:(id)arg2 withError:(id*)arg3;
- (id)copyPlistWithMSMKeys:(id)arg1 withError:(id*)arg2;
- (bool)jobIsManagedByMSM:(id)arg1;
- (void)scanPlistsAtPath:(id)arg1 execBlock:(id /* block */)arg2;
- (bool)verifyPlist:(id)arg1 forMountPoint:(id)arg2 withError:(id*)arg3;

@end
