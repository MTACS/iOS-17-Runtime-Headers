
@interface _UIViewLFLDVariableChangeRecord : _UIViewLFLDChangeRecord {
    double  _value;
    NSISVariable * _variable;
    UIView * _variableDelegate;
}

@property (nonatomic, readonly) double value;
@property (nonatomic, readonly) NSISVariable *variable;
@property (nonatomic, readonly) UIView *variableDelegate;

- (void).cxx_destruct;
- (id)description;
- (id)initWithVariable:(id)arg1 inLayoutEngine:(id)arg2;
- (double)value;
- (id)variable;
- (id)variableDelegate;

@end
