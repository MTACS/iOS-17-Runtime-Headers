
@interface SGModelFeatures : NSObject {
    SGModelSource * _source;
    PMLSparseVector * _vector;
}

- (void).cxx_destruct;
- (id)initWithSource:(id)arg1 vector:(id)arg2;
- (id)sessionDescriptor;
- (id)source;
- (id)vector;

@end
