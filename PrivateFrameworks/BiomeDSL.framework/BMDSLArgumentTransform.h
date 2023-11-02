
@interface BMDSLArgumentTransform : BMDSLBaseCodable <BMDSLTransform> {
    <BMDSLArgumentSelector> * _selector;
}

@property (nonatomic, readonly) <BMDSLArgumentSelector> *selector;

+ (bool)supportsSecureCoding;
+ (id)withSelector:(id)arg1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSelector:(id)arg1;
- (id)initWithSelector:(id)arg1 name:(id)arg2 version:(unsigned int)arg3;
- (id)selector;
- (id)transformInput:(id)arg1 combinedState:(id)arg2;

@end
