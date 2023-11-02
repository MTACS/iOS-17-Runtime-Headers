
@interface IMDRecord : NSObject

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (bool)allowsWeakReference;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (bool)retainWeakReference;

@end
