
@protocol MDKeyRing

@required

+ (<MDKeyRing> *)defaultKeyRing;

- (NSArray *)allKeyUUIDs;
- (struct __CFUUID { }*)copyDesignatedKeyUUID;
- (NSString *)copyRandomPassword;
- (void)scheduleAccessToKey:(void *)arg1 onQueue:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 8: struct __CFUUID { }*, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct __SecKey { }*, void*

@end
