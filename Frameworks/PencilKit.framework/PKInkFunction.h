
@interface PKInkFunction : NSObject {
    NSMutableArray * _controlPoints;
    unsigned long long  _deviceMask;
    unsigned long long  _functionType;
    unsigned long long  _inkInput;
    unsigned long long  _inkProperty;
    unsigned long long  _inputMask;
    NSMutableArray * _inputPoints;
    NSMutableArray * _maxOutputPoints;
    NSMutableArray * _minOutputPoints;
    NSMutableArray * _outputPoints;
}

@property (nonatomic, retain) NSMutableArray *controlPoints;
@property (nonatomic) unsigned long long deviceMask;
@property (nonatomic) unsigned long long functionType;
@property (nonatomic) unsigned long long inkInput;
@property (nonatomic) unsigned long long inkProperty;
@property (nonatomic) unsigned long long inputMask;
@property (nonatomic, retain) NSMutableArray *inputPoints;
@property (nonatomic, retain) NSMutableArray *maxOutputPoints;
@property (nonatomic, retain) NSMutableArray *minOutputPoints;
@property (nonatomic, retain) NSMutableArray *outputPoints;

- (void).cxx_destruct;
- (id)controlPoints;
- (id)description;
- (unsigned long long)deviceMask;
- (unsigned long long)functionType;
- (id)initWithInputPoints:(id)arg1 outputPoints:(id)arg2 functionType:(unsigned long long)arg3;
- (id)initWithProperty:(unsigned long long)arg1 input:(unsigned long long)arg2 inputMask:(unsigned long long)arg3 deviceMask:(unsigned long long)arg4 inputPoints:(id)arg5 minOutputPoints:(id)arg6 maxOutputPoints:(id)arg7 outputPoints:(id)arg8 controlPoints:(id)arg9 functionType:(unsigned long long)arg10;
- (unsigned long long)inkInput;
- (unsigned long long)inkProperty;
- (unsigned long long)inputMask;
- (id)inputPoints;
- (id)maxOutputPoints;
- (id)minOutputPoints;
- (id)outputPoints;
- (void)setControlPoints:(id)arg1;
- (void)setDeviceMask:(unsigned long long)arg1;
- (void)setFunctionType:(unsigned long long)arg1;
- (void)setInkInput:(unsigned long long)arg1;
- (void)setInkProperty:(unsigned long long)arg1;
- (void)setInputMask:(unsigned long long)arg1;
- (void)setInputPoints:(id)arg1;
- (void)setMaxOutputPoints:(id)arg1;
- (void)setMinOutputPoints:(id)arg1;
- (void)setOutputPoints:(id)arg1;
- (double)solveForInput:(double)arg1;

@end
