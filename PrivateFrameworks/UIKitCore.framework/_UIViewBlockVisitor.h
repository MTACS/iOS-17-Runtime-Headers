
@interface _UIViewBlockVisitor : _UIViewVisitor {
    id /* block */  _visitorBlock;
}

@property (nonatomic, copy) id /* block */ visitorBlock;

- (bool)_visitView:(id)arg1;
- (void)dealloc;
- (id)initWithTraversalDirection:(unsigned long long)arg1 visitorBlock:(id /* block */)arg2;
- (void)setVisitorBlock:(id /* block */)arg1;
- (id /* block */)visitorBlock;

@end
