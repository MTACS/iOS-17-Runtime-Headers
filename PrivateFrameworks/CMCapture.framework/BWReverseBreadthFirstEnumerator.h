
@interface BWReverseBreadthFirstEnumerator : BWNodeEnumerator {
    NSMutableArray * _queue;
}

- (void)dealloc;
- (id)initWithGraph:(id)arg1;
- (id)nextObject;

@end
