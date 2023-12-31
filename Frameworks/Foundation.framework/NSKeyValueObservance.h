
@interface NSKeyValueObservance : NSObject {
    unsigned int  _cachedIsShareable;
    void * _context;
    unsigned int  _isInternalObservationHelper;
    NSObject * _observer;
    unsigned int  _options;
    NSObject * _originalObservable;
    NSKeyValueProperty * _property;
}

- (id)_initWithObserver:(id)arg1 property:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 originalObservable:(id)arg5;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
