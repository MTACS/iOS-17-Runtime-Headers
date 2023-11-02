
@interface HFVariableImageIconDescriptor : HFImageIconDescriptor {
    double  _variableValue;
}

@property (nonatomic, readonly) double variableValue;

- (id)description;
- (unsigned long long)hash;
- (id)initWithSystemImageNamed:(id)arg1 variableValue:(double)arg2 configuration:(id)arg3;
- (bool)isEqual:(id)arg1;
- (double)variableValue;

@end
