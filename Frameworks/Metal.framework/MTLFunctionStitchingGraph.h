
@interface MTLFunctionStitchingGraph : NSObject <NSCopying> {
    NSArray * _attributes;
    NSString * _functionName;
    NSArray * _nodes;
    MTLFunctionStitchingFunctionNode * _outputNode;
}

@property (nonatomic, copy) NSArray *attributes;
@property (nonatomic, copy) NSString *functionName;
@property (nonatomic, copy) NSArray *nodes;
@property (nonatomic, copy) MTLFunctionStitchingFunctionNode *outputNode;

- (id)attributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)functionName;
- (id)init;
- (id)initWithFunctionName:(id)arg1 nodes:(id)arg2 outputNode:(id)arg3 attributes:(id)arg4;
- (id)nodes;
- (id)outputNode;
- (void)setAttributes:(id)arg1;
- (void)setFunctionName:(id)arg1;
- (void)setNodes:(id)arg1;
- (void)setOutputNode:(id)arg1;

@end
