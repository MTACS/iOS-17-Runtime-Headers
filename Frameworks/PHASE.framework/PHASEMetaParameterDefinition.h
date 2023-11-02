
@interface PHASEMetaParameterDefinition : PHASEDefinition {
    id  _value;
}

@property (nonatomic, readonly) id value;

+ (id)new;

- (void).cxx_destruct;
- (id)init;
- (id)initInternal;
- (id)initWithValue:(id)arg1;
- (id)value;

@end
