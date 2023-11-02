
@protocol PXStoryTransition <NSObject>

@required

- (id /* block */)completionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, bool, void*, id, SEL
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id /* block */)effectAlphaHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, double, double, void*, id, SEL
- (long long)event;
- (BOOL)kind;
- (void)setCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setEffectAlphaHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, double, void*

@end
