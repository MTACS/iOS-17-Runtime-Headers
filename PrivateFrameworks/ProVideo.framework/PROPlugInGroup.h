
@interface PROPlugInGroup : NSObject

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)addPlugIn:(id)arg1;
- (id)displayName;
- (id)initWithUUID:(struct __CFUUID { }*)arg1 name:(id)arg2 bundle:(id)arg3;
- (id)name;
- (id)plugIns;
- (id)plugInsForProtocols:(id)arg1;
- (void)removePlugIn:(id)arg1;
- (struct __CFUUID { }*)uuid;

@end
