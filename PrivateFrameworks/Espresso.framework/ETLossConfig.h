
@interface ETLossConfig : NSObject {
    NSString * _custom_network_path;
    NSString * _label_name;
    NSArray * _label_shape;
    NSString * _loss_name;
    unsigned long long  _mode;
    NSString * _output_name;
}

@property (retain) NSString *custom_network_path;
@property (retain) NSString *label_name;
@property (retain) NSArray *label_shape;
@property (retain) NSString *loss_name;
@property unsigned long long mode;
@property (retain) NSString *output_name;

+ (id)L2Loss;
+ (id)softmaxCrossEntropyLoss;

- (void).cxx_destruct;
- (id)custom_network_path;
- (id)label_name;
- (id)label_shape;
- (id)loss_name;
- (unsigned long long)mode;
- (id)output_name;
- (void)setCustom_network_path:(id)arg1;
- (void)setLabel_name:(id)arg1;
- (void)setLabel_shape:(id)arg1;
- (void)setLoss_name:(id)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setOutput_name:(id)arg1;

@end
