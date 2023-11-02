
@interface NEProcessInfo : NSObject

+ (void)clearUUIDCache;
+ (id)copyDNSUUIDs;
+ (id)copyNEHelperUUIDs;
+ (id)copyUUIDsForBundleID:(id)arg1 uid:(unsigned int)arg2;
+ (id)copyUUIDsForExecutable:(id)arg1;
+ (bool)is64bitCapable;

- (id)init;

@end
