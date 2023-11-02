
@interface PPQuickTypeItemCache : NSObject {
    NSMutableDictionary * _entries;
    NSMutableOrderedSet * _keys;
}

- (void).cxx_destruct;
- (id)init;
- (void)setEntry:(id)arg1 key:(id)arg2;

@end
