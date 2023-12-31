
@interface NSObservationBuffer : NSObservationTransformer

@property bool automaticallyEmitsObjects;
@property (copy) id /* block */ bufferFullHandler;
@property (getter=isMemoryPressureSensitive) bool memoryPressureSensitive;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)bufferWithMaximumObjectCount:(unsigned long long)arg1 fullPolicy:(long long)arg2 outputQueue:(id)arg3;
+ (id)bufferWithOutputQueue:(id)arg1;

- (bool)automaticallyEmitsObjects;
- (id /* block */)bufferFullHandler;
- (void)emitAllObjects;
- (void)emitObject;
- (id)initWithMaximumObjectCount:(unsigned long long)arg1 fullPolicy:(long long)arg2 outputQueue:(id)arg3;
- (bool)isMemoryPressureSensitive;
- (void)setAutomaticallyEmitsObjects:(bool)arg1;
- (void)setBufferFullHandler:(id /* block */)arg1;
- (void)setMemoryPressureSensitive:(bool)arg1;

@end
