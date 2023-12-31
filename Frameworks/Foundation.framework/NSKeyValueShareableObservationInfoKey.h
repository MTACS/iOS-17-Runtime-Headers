
@interface NSKeyValueShareableObservationInfoKey : NSObject {
    bool  _addingNotRemoving;
    void * _additionContext;
    NSObject * _additionObserver;
    unsigned long long  _additionOptions;
    NSObject * _additionOriginalObservable;
    NSKeyValueProperty * _additionProperty;
    NSKeyValueObservationInfo * _baseObservationInfo;
    unsigned long long  _cachedHash;
    NSKeyValueObservance * _removalObservance;
    unsigned long long  _removalObservanceIndex;
}

@end
