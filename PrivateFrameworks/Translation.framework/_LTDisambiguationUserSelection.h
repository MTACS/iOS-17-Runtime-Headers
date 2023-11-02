
@interface _LTDisambiguationUserSelection : NSObject <NSCopying> {
    _LTDirectedEdge * _edge;
    unsigned long long  _linkIndex;
    NSString * _sourceSnippet;
}

@property (nonatomic, readonly, copy) _LTDirectedEdge *edge;
@property (nonatomic, readonly) unsigned long long linkIndex;
@property (nonatomic, readonly, copy) NSString *sourceSnippet;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)edge;
- (unsigned long long)hash;
- (id)initWithEdge:(id)arg1 sourceSnippet:(id)arg2 linkIndex:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)linkIndex;
- (id)sourceSnippet;

@end
