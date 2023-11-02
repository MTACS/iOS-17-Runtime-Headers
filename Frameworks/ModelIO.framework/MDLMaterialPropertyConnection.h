
@interface MDLMaterialPropertyConnection : NSObject <MDLNamed> {
    MDLMaterialProperty * _input;
    NSString * _name;
    MDLMaterialProperty * _output;
}

@property (nonatomic, readonly) MDLMaterialProperty *input;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) MDLMaterialProperty *output;

- (void).cxx_destruct;
- (id)initWithOutput:(id)arg1 input:(id)arg2;
- (id)input;
- (id)name;
- (id)output;
- (void)setName:(id)arg1;

@end
