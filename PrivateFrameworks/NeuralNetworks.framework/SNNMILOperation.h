
@interface SNNMILOperation : NSObject {
    NSArray * _attributes;
    NSArray * _inputs;
    NSString * _opName;
    NSArray * _outputs;
}

@property (nonatomic, readonly) NSArray *attributes;
@property (nonatomic, readonly) NSArray *inputs;
@property (nonatomic, readonly) NSString *opName;
@property (nonatomic, readonly) NSArray *outputs;

- (void).cxx_destruct;
- (id)attributeWithName:(id)arg1;
- (id)attributes;
- (id)initWithOperatorName:(id)arg1 inputs:(id)arg2 attributes:(id)arg3 outputs:(id)arg4;
- (id)inputWithName:(id)arg1;
- (id)inputs;
- (id)opName;
- (id)outputs;

@end
