
@interface BPSBookmarkableArrayEnumerator : BPSBookmarkableEnumerator {
    NSArray * _array;
    unsigned long long  _index;
}

- (void).cxx_destruct;
- (void)applyBookmark:(id)arg1;
- (id)bookmark;
- (id)initWithArray:(id)arg1;
- (id)nextObject;
- (void)reset;
- (id)validateBookmark:(id)arg1;

@end
