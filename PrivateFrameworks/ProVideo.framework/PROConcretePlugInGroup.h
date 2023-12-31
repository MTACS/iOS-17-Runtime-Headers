
@interface PROConcretePlugInGroup : NSObject {
    NSString * displayName;
    NSLock * mutex;
    NSString * name;
    NSMutableArray * plugIns;
    NSMutableDictionary * protocols;
    struct __CFUUID { } * uuidRef;
}

- (void)addPlugIn:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (unsigned long long)hash;
- (id)initWithUUID:(struct __CFUUID { }*)arg1 name:(id)arg2 bundle:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPlugInGroup:(id)arg1;
- (id)name;
- (id)plugIns;
- (id)plugInsForProtocols:(id)arg1;
- (void)removePlugIn:(id)arg1;
- (struct __CFUUID { }*)uuid;
- (id)uuidString;

@end
