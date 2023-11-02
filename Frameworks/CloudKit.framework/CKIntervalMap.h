
@interface CKIntervalMap : NSObject {
    bool  _dirty;
    CKIntervalMapRangeMapContainer * _rangeMap;
}

@property (nonatomic) bool dirty;
@property (nonatomic, readonly) CKIntervalMapRangeMapContainer *rangeMap;

- (void).cxx_destruct;
- (id)allIndexes;
- (bool)containsIndex:(unsigned long long)arg1;
- (bool)containsIndexes:(id)arg1;
- (id)description;
- (bool)dirty;
- (void)enumerateObjectsForIndexes:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (void)maintainInvariants;
- (id)rangeMap;
- (void)setDirty:(bool)arg1;

@end
