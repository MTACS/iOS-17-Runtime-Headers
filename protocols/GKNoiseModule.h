
@protocol GKNoiseModule <NSObject>

@required

- (<GKNoiseModule> *)cloneModule;
- (<GKNoiseModule> *)inputModuleAtIndex:(int)arg1;
- (int)requiredInputModuleCount;
- (void)setInputModule:(id <GKNoiseModule>)arg1 atIndex:(int)arg2;
- (double)valueAt;

@end
