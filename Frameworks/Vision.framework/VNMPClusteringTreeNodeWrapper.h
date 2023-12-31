
@interface VNMPClusteringTreeNodeWrapper : NSObject {
    bool  _freeNodeOnDealloc;
    void * _node;
}

@property bool freeNodeOnDealloc;
@property void*node;

- (float)avgDistance;
- (void)dealloc;
- (id)descriptor;
- (float)distance;
- (bool)freeNodeOnDealloc;
- (id)getLeafNodes;
- (id)initWithNode:(void*)arg1 freeNodeOnDealloc:(bool)arg2;
- (int)leafsCount;
- (id)left;
- (void*)node;
- (int)nodeId;
- (id)right;
- (void)setFreeNodeOnDealloc:(bool)arg1;
- (void)setNode:(void*)arg1;

@end
