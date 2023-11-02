
@interface BMDSLTableStream : BMDSL <BMTableStreamQuery> {
    <BMTableQueryExpression> * _expression;
    BMDSL * _upstream;
}

@property (nonatomic, retain) <BMTableQueryExpression> *expression;
@property (nonatomic, retain) BMDSL *upstream;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bpsPublisher;
- (void)encodeWithCoder:(id)arg1;
- (id)expression;
- (id)initWithCoder:(id)arg1;
- (id)initWithUpstream:(id)arg1 expression:(id)arg2;
- (id)initWithUpstream:(id)arg1 expression:(id)arg2 name:(id)arg3 version:(unsigned int)arg4;
- (id)select:(id)arg1;
- (void)setExpression:(id)arg1;
- (void)setUpstream:(id)arg1;
- (id)upstream;
- (id)upstreams;

@end
