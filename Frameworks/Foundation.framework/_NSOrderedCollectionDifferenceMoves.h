
@interface _NSOrderedCollectionDifferenceMoves : NSObject {
    unsigned long long  _firstRemove;
    NSMutableDictionary * _insertDict;
    NSMutableDictionary * _removeDict;
}

- (void)dealloc;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
