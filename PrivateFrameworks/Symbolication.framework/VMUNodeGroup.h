
@interface VMUNodeGroup : NSObject {
    unsigned int  _count;
    void * _group;
    unsigned int  _inlineNodes;
    NSString * _name;
    unsigned int  _nodeNamespaceSize;
    unsigned int  _singleNode;
}

@property (readonly) NSString *name;

- (void).cxx_destruct;
- (void)_createGroup;
- (void)addNode:(unsigned int)arg1;
- (long long)count;
- (void)dealloc;
- (void)enumerateNodesWithBlock:(id /* block */)arg1;
- (id)initWithName:(id)arg1 graph:(id)arg2;
- (id)name;
- (void*)nodes;

@end
