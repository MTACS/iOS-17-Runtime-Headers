
@protocol PVCompositeDelegate <NSObject>

@optional

- (void)loadWithUserContext:(id)arg1;
- (id)preprocessWithInputs:(NSDictionary *)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 userContext:(id)arg3 compositeContext:(PVCompositeDelegateContext *)arg4;
- (PVImageBuffer *)renderWithInputs:(NSDictionary *)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 metadata:(NSObject *)arg3;
- (PVImageBuffer *)renderWithInputs:(NSDictionary *)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 userContext:(id)arg3 compositeContext:(PVCompositeDelegateContext *)arg4;
- (void)unloadWithUserContext:(id)arg1;

@end
