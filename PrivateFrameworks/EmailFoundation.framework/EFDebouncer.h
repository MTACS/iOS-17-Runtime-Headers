
@interface EFDebouncer : NSObject <EFCancelable> {
    <EFCancelable> * _cancelable;
    EFObservable<EFObserver> * _observable;
}

@property (nonatomic, readonly) <EFCancelable> *cancelable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) EFObservable<EFObserver> *observable;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (void)cancel;
- (id)cancelable;
- (void)debounceResult:(id)arg1;
- (id)initWithTimeInterval:(double)arg1 scheduler:(id)arg2 startAfter:(unsigned long long)arg3 block:(id /* block */)arg4;
- (id)observable;

@end
