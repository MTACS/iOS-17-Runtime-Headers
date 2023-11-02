
@interface AVFragmentedAssetsArray : NSArray {
    NSMutableDictionary * _cachedFragments;
    unsigned long long  _count;
    unsigned long long  _firstSequenceNumber;
}

- (unsigned long long)count;
- (void)dealloc;
- (id)init;
- (id)initWithCount:(unsigned long long)arg1 firstSequenceNumber:(unsigned long long)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;

@end
