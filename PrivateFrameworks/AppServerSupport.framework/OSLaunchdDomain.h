
@interface OSLaunchdDomain : NSObject {
    unsigned long long  _handle;
    int  _type;
}

+ (unsigned int)_createDomainOptions2flags:(unsigned long long)arg1;
+ (id)createDomainForRoleAccount:(unsigned int)arg1 sessionType:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
+ (id)currentDomain;
+ (id)domainForAsid:(int)arg1;
+ (id)domainForPid:(int)arg1;
+ (id)domainForRoleAccountUser:(unsigned int)arg1;
+ (id)domainForUser:(unsigned int)arg1;
+ (id)loginwindowDomain;
+ (id)systemDomain;

- (unsigned long long)hash;
- (id)initWithType:(int)arg1 handle:(unsigned long long)arg2;
- (bool)initiateRemoval:(id*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)unpendLaunches:(id*)arg1;

@end
