
@interface SelectorStringThread : NSThread

+ (void)detachNewThreadSelector:(SEL)arg1 toTarget:(id)arg2 withObject:(id)arg3;

@end
