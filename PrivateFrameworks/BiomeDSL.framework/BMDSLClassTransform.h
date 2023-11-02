
@interface BMDSLClassTransform : BMDSLBaseCodable <BMDSLTransform> {
    NSString * _className;
    NSString * _transformName;
}

@property (nonatomic, copy) NSString *className;
@property (nonatomic, copy) NSString *transformName;

+ (bool)supportsSecureCoding;
+ (id)withClassName:(id)arg1 selector:(SEL)arg2;
+ (id)withClassName:(id)arg1 transformName:(id)arg2;

- (void).cxx_destruct;
- (id)className;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithClassName:(id)arg1 selector:(SEL)arg2;
- (id)initWithClassName:(id)arg1 transformName:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 version:(unsigned int)arg2 className:(id)arg3 transformName:(id)arg4;
- (void)setClassName:(id)arg1;
- (void)setTransformName:(id)arg1;
- (id)transformInput:(id)arg1 combinedState:(id)arg2;
- (id)transformName;

@end
