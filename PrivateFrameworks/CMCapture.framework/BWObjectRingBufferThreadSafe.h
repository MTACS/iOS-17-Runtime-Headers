
@interface BWObjectRingBufferThreadSafe : BWObjectRingBuffer {
    struct OpaqueFigReentrantMutex { } * _lock;
}

- (void)appendObject:(id)arg1 forTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)clear;
- (void)dealloc;
- (id)description;
- (void)enumerateObjectsStartingAt:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 usingBlock:(id /* block */)arg2;
- (void)extractTimeRangeFrom:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 until:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 into:(id)arg3 times:(id)arg4;
- (id)firstObject;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })firstTime;
- (void)flushEntriesEarlierThan:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)initWithCapacity:(int)arg1;
- (id)lastObject;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lastTime;
- (void)reverseEnumerateObjectsStartingAt:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 usingBlock:(id /* block */)arg2;
- (void)setCapacity:(int)arg1;

@end
