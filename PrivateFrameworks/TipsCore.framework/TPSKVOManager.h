
@interface TPSKVOManager : NSObject {
    struct __CFDictionary { } * _KVODictionary;
    id  _observer;
}

@property (nonatomic) struct __CFDictionary { }*KVODictionary;
@property (nonatomic) id observer;

- (void).cxx_destruct;
- (struct __CFDictionary { }*)KVODictionary;
- (void)addKVOObject:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (void)dealloc;
- (id)initWithObserver:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observer;
- (void)removeAllKVOObjects;
- (void)removeKVOForObject:(id)arg1;
- (void)removeKVOObject:(id)arg1 forKeyPath:(id)arg2;
- (void)setKVODictionary:(struct __CFDictionary { }*)arg1;
- (void)setObserver:(id)arg1;

@end
