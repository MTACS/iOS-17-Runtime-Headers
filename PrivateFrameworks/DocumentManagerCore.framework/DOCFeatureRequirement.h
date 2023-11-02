
@interface DOCFeatureRequirement : NSObject {
    NSString * _name;
    id /* block */  _requirementValidationBlock;
}

@property (readonly) NSString *name;
@property (readonly) id /* block */ requirementValidationBlock;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 requirementValidationBlock:(id /* block */)arg2;
- (id)name;
- (id /* block */)requirementValidationBlock;

@end
