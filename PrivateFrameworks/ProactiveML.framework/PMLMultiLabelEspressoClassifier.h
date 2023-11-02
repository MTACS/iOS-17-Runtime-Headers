
@interface PMLMultiLabelEspressoClassifier : NSObject <PMLMultiLabelClassifierProtocol> {
    void * _espressoContext;
    struct { 
        void *plan; 
        int network_index; 
    }  _espressoModel;
    void * _espressoPlan;
    unsigned long long  _inputNumParameters;
    unsigned long long  _outputNumReplyClasses;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)classifierWithEspressoModelFile:(id)arg1;
+ (unsigned long long)getNumParametersFromShape:(unsigned long long)arg1 rank:(unsigned long long)arg2;
+ (id)makeStringForShape:(unsigned long long)arg1;

- (void)dealloc;
- (id)initWithEspressoContext:(void*)arg1 espressoPlan:(void*)arg2 espressoModel:(struct { void *x1; int x2; })arg3 inputNumParameters:(unsigned long long)arg4 outputNumReplyClasses:(unsigned long long)arg5;
- (unsigned long long)outputDimension;
- (id)predict:(id)arg1;

@end
