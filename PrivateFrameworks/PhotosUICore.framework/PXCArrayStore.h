
@interface PXCArrayStore : NSObject {
    unsigned long long  _elementSize;
    bool  _isSharedArrayInUse;
    void * _sharedArray;
    unsigned long long  _sharedArrayCapacity;
}

- (void*)_sharedArrayWithElementsCount:(unsigned long long)arg1;
- (void)accessArrayWithElementsCount:(unsigned long long)arg1 accessBlock:(id /* block */)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithElementSize:(unsigned long long)arg1;

@end
