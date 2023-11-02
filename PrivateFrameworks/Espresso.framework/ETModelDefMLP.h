
@interface ETModelDefMLP : ETModelDef {
    int  _hidden_size;
    int  _input_size;
    int  _output_size;
}

@property int hidden_size;
@property int input_size;
@property int output_size;

- (void)buildNetwork;
- (int)hidden_size;
- (int)input_size;
- (int)output_size;
- (void)setHidden_size:(int)arg1;
- (void)setInput_size:(int)arg1;
- (void)setOutput_size:(int)arg1;

@end
