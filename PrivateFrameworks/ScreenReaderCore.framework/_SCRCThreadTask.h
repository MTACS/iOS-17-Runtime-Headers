
@interface _SCRCThreadTask : NSObject {
    unsigned int  _mask;
    NSMutableArray * _objectArray;
    SEL  _selector;
    id  _target;
    NSConditionLock * _waitLock;
}

+ (id)newThreadTaskWithTarget:(id)arg1 selector:(SEL)arg2 cancelMask:(unsigned int)arg3 count:(unsigned int)arg4 firstObject:(id)arg5 moreObjects:(char *)arg6;

- (void).cxx_destruct;
- (void)dealloc;
- (void)fire;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 cancelMask:(unsigned int)arg3 count:(unsigned int)arg4 firstObject:(id)arg5 moreObjects:(char *)arg6;
- (void)setWaitLock:(id)arg1;

@end
