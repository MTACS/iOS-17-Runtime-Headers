
@interface _UIContextMenuLinkedList : NSObject {
    NSMutableArray * _nodes;
}

@property (nonatomic, readonly) _UIContextMenuNode *current;
@property (nonatomic, readonly) _UIContextMenuNode *first;
@property (nonatomic, readonly) NSMutableArray *nodes;

- (void).cxx_destruct;
- (void)_enumerateNodes:(id /* block */)arg1 inReverse:(bool)arg2;
- (void)addNode:(id)arg1;
- (id)current;
- (id)description;
- (void)enumerateNodes:(id /* block */)arg1;
- (id)first;
- (id)nodeForMenu:(id)arg1;
- (id)nodes;
- (id)popNode;
- (id)removeNode:(id)arg1;
- (void)reverseEnumerateNodes:(id /* block */)arg1;

@end
