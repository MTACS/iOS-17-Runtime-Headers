
@interface BWObjectRingBuffer : NSObject {
    bool  _ascending;
    int  _capacity;
    int  _count;
    bool  _enforceAscending;
    bool  _expectAscending;
    id * _objects;
    int  _oldest;
    struct { long long x1; int x2; unsigned int x3; long long x4; } * _times;
}

@property (nonatomic, readonly) bool ascending;
@property (nonatomic) int capacity;
@property (nonatomic, readonly) int count;
@property (nonatomic) bool enforceAscending;
@property (nonatomic) bool expectAscending;

+ (void)initialize;

- (void)_enumerateObjectsStartingAtOffset:(int)arg1 usingBlock:(id /* block */)arg2;
- (int)_findClosestOffsetToTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_forceAscendingTo:(bool)arg1;
- (void)_reverseEnumerateObjectsStartingAtOffset:(int)arg1 usingBlock:(id /* block */)arg2;
- (void)appendObject:(id)arg1 forTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (bool)ascending;
- (int)capacity;
- (void)clear;
- (int)count;
- (void)dealloc;
- (id)description;
- (bool)enforceAscending;
- (void)enumerateObjectsStartingAt:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 usingBlock:(id /* block */)arg2;
- (bool)expectAscending;
- (void)extractTimeRangeFrom:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 until:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 into:(id)arg3 times:(id)arg4;
- (id)firstObject;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })firstTime;
- (void)flushEntriesEarlierThan:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)initWithCapacity:(int)arg1;
- (id)lastObject;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lastTime;
- (void)reverseEnumerateObjectsStartingAt:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 usingBlock:(id /* block */)arg2;
- (void)setCapacity:(int)arg1;
- (void)setEnforceAscending:(bool)arg1;
- (void)setExpectAscending:(bool)arg1;

@end
