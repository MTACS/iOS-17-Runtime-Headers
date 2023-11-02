
@interface IMAllocTracking : NSObject {
    NSMutableArray * _callStacks;
}

- (void)_registerCallstack;
- (void)dealloc;
- (oneway void)release;
- (id)retain;

@end
