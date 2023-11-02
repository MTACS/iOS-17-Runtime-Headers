
@protocol AVTPreloadingTask <AVTCancelable>

@required

- (id /* block */)completionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <AVTCancelable> *, void*, id, SEL
- (bool)isCanceled;
- (void)setCanceled:(bool)arg1;

@end
