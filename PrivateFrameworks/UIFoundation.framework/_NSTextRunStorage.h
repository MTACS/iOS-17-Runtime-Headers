
@interface _NSTextRunStorage : NSObject {
    NSMutableRLEArray * _RLEArray;
    <NSTextLocation> * _baseLocation;
    <__NSTextRunStorageDataSource> * _dataSource;
    NSStorage * _elements;
    bool  _hasBaseLocation;
    bool  _isCountable;
    bool  _mapsLocationOffset;
    long long  _seedElementIndex;
    NSTextRange * _seedRange;
}

@property (readonly) long long baseIndex;
@property (readonly) <NSTextLocation> *baseLocation;
@property (readonly) <__NSTextRunStorageDataSource> *dataSource;
@property (readonly) bool isEmpty;

- (long long)baseIndex;
- (id)baseLocation;
- (id)dataSource;
- (void)dealloc;
- (id)description;
- (id)enumerateObjectsFromLocation:(id)arg1 options:(long long)arg2 usingBlock:(id /* block */)arg3;
- (id)initWithDataSource:(id)arg1;
- (void)invalidateElementsInRange:(id)arg1 delta:(long long)arg2;
- (bool)isEmpty;
- (void)setObject:(id)arg1 forRange:(id)arg2;

@end
