
@protocol CRKAnimationCoordinating <NSObject>

@required

- (id /* block */)animations:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (id /* block */)completion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, bool, void*, id, SEL
- (UIView *)containerView;
- (double)duration;
- (id /* block */)finalSetup:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (id /* block */)initialSetup:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (bool)isAnimated;
- (void)setAnimations:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setDuration:(double)arg1;
- (void)setFinalSetup:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setInitialSetup:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
