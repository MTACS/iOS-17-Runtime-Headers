
@interface TDPacker : NSObject {
    NSArray * _objectsToPack;
    NSArray * _packedObjects;
    _TDPackerNode * _root;
    id /* block */  _sizeHandler;
}

@property (nonatomic, readonly) unsigned long long countOfEmptyNodes;
@property (nonatomic, retain) NSArray *objectsToPack;
@property (retain) NSArray *packedObjects;
@property (retain) _TDPackerNode *root;

- (void)_countOfEmptyNodes:(id)arg1 count:(unsigned long long*)arg2;
- (id)_findNode:(id)arg1 ofSize:(struct CGSize { double x1; double x2; })arg2;
- (id)_growDown:(struct CGSize { double x1; double x2; })arg1;
- (id)_growNodeToSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_growRight:(struct CGSize { double x1; double x2; })arg1;
- (id)_splitNode:(id)arg1 toSize:(struct CGSize { double x1; double x2; })arg2;
- (unsigned long long)countOfEmptyNodes;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })enclosingSize;
- (struct CGPoint { double x1; double x2; })fitPositionOfObjectAtIndex:(long long)arg1;
- (bool)objectAtIndexFit:(long long)arg1;
- (id)objectsToPack;
- (void)pack;
- (id)packedObjects;
- (id)root;
- (void)setObjectsToPack:(id)arg1;
- (void)setPackedObjects:(id)arg1;
- (void)setRoot:(id)arg1;
- (void)setSizeHandler:(id /* block */)arg1;
- (id /* block */)sizeHandler;

@end
