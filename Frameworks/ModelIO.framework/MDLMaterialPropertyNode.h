
@interface MDLMaterialPropertyNode : NSObject <MDLNamed> {
    id /* block */  _evaluationFunction;
    NSMutableArray * _inputNodes;
    NSArray * _inputs;
    NSString * _name;
    NSArray * _outputs;
}

@property (nonatomic, copy) id /* block */ evaluationFunction;
@property (nonatomic, readonly) NSArray *inputs;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) NSArray *outputs;

- (void).cxx_destruct;
- (id /* block */)evaluationFunction;
- (id)initWithInputs:(id)arg1 outputs:(id)arg2 evaluationFunction:(id /* block */)arg3;
- (id)inputs;
- (id)name;
- (id)outputs;
- (void)setEvaluationFunction:(id /* block */)arg1;
- (void)setName:(id)arg1;

@end
