
@protocol AVTTransition <NSObject>

@required

- (bool)animated;
- (void)cancel;
- (id /* block */)completionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, bool, void*, id, SEL
- (<AVTTransitionModel> *)model;
- (void)setAnimated:(bool)arg1;
- (void)setCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setSetupHandler:(void *)arg1; // needs 1 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, bool, void*, void*
- (void)setState:(long long)arg1;
- (id /* block */)setupHandler:(void *)arg1; // needs 1 arg types, found 10: id /* block */, id /* block */, void*, void, id /* block */, bool, void*, void*, id, SEL
- (void)start;
- (long long)state;

@end
