
@protocol SVVideoDurationObserving <NSObject>

@required

- (id /* block */)changeBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <SVVideoDurationObserving> *, void*, id, SEL
- (double)duration;
- (void)onChange:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SVVideoDurationObserving> *, void*

@end
