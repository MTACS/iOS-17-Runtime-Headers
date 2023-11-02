
@interface BWBreadthFirstEnumerator : BWNodeEnumerator {
    NSMutableArray * _holdQueue;
    NSMutableArray * _queue;
}

- (void)dealloc;
- (id)initWithGraph:(id)arg1;
- (id)nextObject;

@end
