
@protocol ISChangeObserver <NSObject>

@required

- (void)observable:(ISObservable *)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;

@end
