
@interface SCRCStackQueue : NSObject {
    unsigned long long  _count;
    _SCRCStackNode * _firstNode;
    _SCRCStackNode * _lastNode;
}

- (void).cxx_destruct;
- (void)_safeReleaseAllObjects;
- (unsigned long long)count;
- (void)dealloc;
- (id)dequeueObject;
- (id)dequeueObjectRetained;
- (id)description;
- (void)enqueueObject:(id)arg1;
- (bool)isEmpty;
- (id)objectEnumerator;
- (id)popObject;
- (id)popObjectRetained;
- (void)pushArray:(id)arg1;
- (void)pushObject:(id)arg1;
- (void)removeAllObjects;
- (id)topObject;

@end
