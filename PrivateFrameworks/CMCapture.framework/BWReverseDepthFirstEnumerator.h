
@interface BWReverseDepthFirstEnumerator : BWNodeEnumerator {
    unsigned long long  _currentSinkIndex;
    int  _ordering;
    NSMutableArray * _stack;
}

- (void)dealloc;
- (id)initWithGraph:(id)arg1 vertexOrdering:(int)arg2;
- (id)nextObject;

@end
