
@protocol CNObservable <NSObject>

@required

- (<CNCancelable> *)subscribe:(id <CNObserver>)arg1;

@end
