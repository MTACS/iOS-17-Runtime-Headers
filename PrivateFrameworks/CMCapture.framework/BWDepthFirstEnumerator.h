
@interface BWDepthFirstEnumerator : BWNodeEnumerator {
    unsigned long long  _currentSourceIndex;
    int  _ordering;
    NSMutableArray * _stack;
}

- (void)dealloc;
- (id)initWithGraph:(id)arg1 vertexOrdering:(int)arg2;
- (id)nextObject;

@end
