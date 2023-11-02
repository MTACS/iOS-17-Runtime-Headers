
@interface SGMultiHeadEspressoModelCached : SGMultiHeadEspressoModel {
    NSString * _espressoModelFile;
    NSDictionary * _headDimensionality;
    NSString * _inputName;
}

+ (id)classifierWithEspressoModelFile:(id)arg1 inputName:(id)arg2 headDimensionality:(id)arg3;

- (void).cxx_destruct;
- (id)headDimensionality;
- (id)initWithEspressoModelFile:(id)arg1 inputName:(id)arg2 headDimensionality:(id)arg3;
- (unsigned long long)inputNumParameters;
- (id)predict:(id)arg1;
- (id)predict:(id)arg1 heads:(id)arg2;

@end
