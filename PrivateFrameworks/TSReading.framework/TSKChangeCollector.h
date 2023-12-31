
@interface TSKChangeCollector : NSObject

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)threadCollector;

- (id)autorelease;
- (void)beginCollectingChanges;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)endCollectingChanges;
- (id)peekCollectedChanges;
- (void)registerChange:(int)arg1 details:(id)arg2 forChangeSource:(id)arg3;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
