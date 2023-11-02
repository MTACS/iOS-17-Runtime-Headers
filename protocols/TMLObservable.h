
@protocol TMLObservable <NSObject>

@required

- (void)tmlAddObserver:(void *)arg1 forKeyPath:(void *)arg2 callback:(void *)arg3; // needs 3 arg types, found 10: id, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <TMLObservable> *, NSString *, id, void*
- (void)tmlRemoveObserver:(id)arg1 forKeyPath:(NSString *)arg2;

@end
