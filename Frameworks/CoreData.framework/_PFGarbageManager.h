
@interface _PFGarbageManager : NSObject {
    NSMutableSet * _filesToCleanUp;
    NSMutableDictionary * _storeLinksDirs;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)defaultInstance;
+ (void)initialize;

- (bool)_isDeallocating;
- (bool)_tryRetain;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
