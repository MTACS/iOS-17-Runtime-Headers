
@interface GKGraph : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * __info;
    void * _cGraph;
    NSMutableArray * _nodes;
}

@property (nonatomic, retain) NSMutableDictionary *_info;
@property (nonatomic, readonly) NSArray *nodes;

+ (id)graph;
+ (id)graphWithNodes:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_info;
- (void)addNodes:(id)arg1;
- (void*)cGraph;
- (void)connectNodeToLowestCostNode:(id)arg1 bidirectional:(bool)arg2;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)findPathFromNode:(id)arg1 toNode:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNodes:(id)arg1;
- (void*)makeCGraph;
- (id)nodes;
- (id)nodesMut;
- (void)removeNodes:(id)arg1;
- (void)set_info:(id)arg1;

@end
