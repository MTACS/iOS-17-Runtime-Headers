
@interface SGMultiHeadEspressoModel : NSObject {
    void * _espressoContext;
    struct { 
        void *plan; 
        int network_index; 
    }  _espressoModel;
    void * _espressoPlan;
    NSDictionary * _headDimensionality;
    NSString * _inputName;
    unsigned long long  _inputNumParameters;
}

+ (id)classifierWithEspressoModelFile:(id)arg1 inputName:(id)arg2 headDimensionality:(id)arg3;
+ (unsigned long long)getNumParametersFromShape:(unsigned long long)arg1 rank:(unsigned long long)arg2;
+ (id)makeStringForShape:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)headDimensionality;
- (id)initWithEspressoContext:(void*)arg1 espressoPlan:(void*)arg2 espressoModel:(struct { void *x1; int x2; })arg3 inputName:(id)arg4 inputNumParameters:(unsigned long long)arg5 headDimensionality:(id)arg6;
- (unsigned long long)inputNumParameters;
- (id)predict:(id)arg1;
- (id)predict:(id)arg1 heads:(id)arg2;

@end
