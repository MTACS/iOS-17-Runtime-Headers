
@interface OBScrollViewWeakLayoutObserver : NSObject <_UIScrollViewLayoutObserver> {
    OBScrollViewWeakLayoutObserver * _selfReference;
    <_UIScrollViewLayoutObserver> * _weakLayoutObserver;
}

- (void).cxx_destruct;
- (void)_scrollViewDidLayoutSubviews:(id)arg1;
- (id)initWithLayoutObserver:(id)arg1;

@end
