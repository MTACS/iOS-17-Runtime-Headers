
@interface BMDSLInstanceTransform : BMDSL <BMDSLTransform> {
    NSString * _transformName;
}

@property (nonatomic, copy) NSString *transformName;

+ (bool)supportsSecureCoding;
+ (id)withSelector:(SEL)arg1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 version:(unsigned int)arg2 transformName:(id)arg3;
- (id)initWithSelector:(SEL)arg1;
- (void)setTransformName:(id)arg1;
- (id)transformInput:(id)arg1 combinedState:(id)arg2;
- (id)transformName;

@end
