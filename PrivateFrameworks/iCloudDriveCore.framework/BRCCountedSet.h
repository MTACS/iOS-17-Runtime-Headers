
@interface BRCCountedSet : NSCountedSet {
    unsigned long long  _totalCount;
}

- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (unsigned long long)totalCount;

@end
