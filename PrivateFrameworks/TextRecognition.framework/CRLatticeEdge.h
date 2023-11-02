
@interface CRLatticeEdge : NSObject {
    unsigned long long  _edgeIndex;
    unsigned long long  _endNode;
    double  _score;
    unsigned long long  _startNode;
    NSString * _symbol;
}

@property (readonly) unsigned long long edgeIndex;
@property (readonly) unsigned long long endNode;
@property (readonly) double score;
@property (readonly) unsigned long long startNode;
@property (nonatomic, readonly) NSString *symbol;

- (void).cxx_destruct;
- (unsigned long long)edgeIndex;
- (unsigned long long)endNode;
- (id)initWithSymbol:(id)arg1 index:(unsigned long long)arg2 score:(double)arg3 startNode:(unsigned long long)arg4 endNode:(unsigned long long)arg5;
- (double)score;
- (unsigned long long)startNode;
- (id)symbol;

@end
