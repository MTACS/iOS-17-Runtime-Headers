
@interface PPBaseScoreInputSet : NSObject {
    _PASLock * _arrayMap;
    _PASLock * _objectMap;
    _PASLock * _scalarMap;
}

- (void).cxx_destruct;
- (unsigned long long)arrayScoreIndexUpperBound;
- (unsigned long long)indexForArrayScoreName:(id)arg1;
- (unsigned long long)indexForObjectScoreName:(id)arg1;
- (unsigned long long)indexForScalarScoreName:(id)arg1;
- (id)init;
- (unsigned long long)minArrayScoreIndex;
- (unsigned long long)minObjectScoreIndex;
- (unsigned long long)minScalarScoreIndex;
- (id)nameForArrayScoreIndex:(unsigned long long)arg1;
- (id)nameForObjectScoreIndex:(unsigned long long)arg1;
- (id)nameForScalarScoreIndex:(unsigned long long)arg1;
- (unsigned long long)objectScoreIndexUpperBound;
- (unsigned long long)scalarScoreIndexUpperBound;
- (unsigned long long)undefinedArrayScoreIndex;
- (unsigned long long)undefinedObjectScoreIndex;
- (unsigned long long)undefinedScalarScoreIndex;

@end
