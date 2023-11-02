
@protocol SBUIPowerDownViewInterface <NSObject>

@required

- (<SBUIPowerDownViewDelegate> *)delegate;
- (void)hideAnimated:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setDelegate:(id <SBUIPowerDownViewDelegate>)arg1;
- (void)showAnimated:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
