
@protocol EFObservable <NSObject>

@required

- (<EFCancelable> *)subscribe:(id <EFObserver>)arg1;

@end
