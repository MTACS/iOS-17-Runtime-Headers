
@interface ETLossDefinition : NSObject {
    NSString * _inputName;
    NSString * _lossOutputName;
    unsigned long long  _mode;
    NSString * _outputName;
    NSString * _targetInputName;
}

@property (readonly) NSString *inputName;
@property (readonly) NSString *lossOutputName;
@property (readonly) unsigned long long mode;
@property (retain) NSString *outputName;
@property (readonly) NSString *targetInputName;

+ (id)BuiltInLoss:(id)arg1;
+ (id)L2LossWithInputName:(id)arg1 targetInputName:(id)arg2 lossOutputName:(id)arg3;
+ (id)crossEntropyLossWithInputName:(id)arg1 targetInputName:(id)arg2 lossOutputName:(id)arg3;

- (void).cxx_destruct;
- (id)initWithMode:(unsigned long long)arg1 inputName:(id)arg2 targetName:(id)arg3 lossOutputName:(id)arg4;
- (id)inputName;
- (id)lossOutputName;
- (unsigned long long)mode;
- (id)outputName;
- (void)setOutputName:(id)arg1;
- (id)targetInputName;

@end
