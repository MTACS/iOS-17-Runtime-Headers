
@interface GKNoiseSource : NSObject

- (id)cloneModule;
- (id)inputModuleAtIndex:(int)arg1;
- (int)requiredInputModuleCount;
- (void)setInputModule:(id)arg1 atIndex:(int)arg2;
- (double)valueAt;

@end
