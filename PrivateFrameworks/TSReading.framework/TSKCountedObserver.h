
@interface TSKCountedObserver : NSObject {
    unsigned long long  mCount;
    TSUWeakReference * mWeakObserver;
}

- (void)dealloc;
- (unsigned long long)decrementCount;
- (unsigned long long)incrementCount;
- (id)initWithObserver:(id)arg1;
- (id)observer;

@end
