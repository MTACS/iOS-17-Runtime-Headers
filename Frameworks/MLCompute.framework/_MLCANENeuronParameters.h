
@interface _MLCANENeuronParameters : NSObject {
    NSArray * _neuronParams;
    int  _type;
}

@property (nonatomic, readonly, retain) NSArray *neuronParams;
@property (nonatomic, readonly) int type;

+ (id)neuronUnitParametersWith:(id)arg1 neuronType:(int)arg2;

- (void).cxx_destruct;
- (id)initWithNeuronParams:(id)arg1 neuronType:(int)arg2;
- (id)neuronParams;
- (int)type;

@end
