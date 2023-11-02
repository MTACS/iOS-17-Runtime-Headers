
@protocol VFObservable <NSObject>

@required

- (<VFCancelable> *)subscribe:(id <VFObserver>)arg1;

@end
