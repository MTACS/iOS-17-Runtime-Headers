
@interface MAAbstractEdge : MAConcreteEdge {
    bool  _isDirected;
    unsigned long long  _maximum;
    unsigned long long  _minimum;
    MAAbstractNode * _sourceAbstractNode;
    MAAbstractNode * _targetAbstractNode;
}

@property (readonly) bool isDirected;
@property (readonly) unsigned long long maximum;
@property (readonly) unsigned long long minimum;

- (void).cxx_destruct;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 minimum:(unsigned long long)arg6 maximum:(unsigned long long)arg7 directed:(bool)arg8;
- (bool)isDirected;
- (unsigned long long)maximum;
- (unsigned long long)minimum;
- (id)oppositeNode:(id)arg1;
- (id)sourceNode;
- (id)targetNode;

@end
