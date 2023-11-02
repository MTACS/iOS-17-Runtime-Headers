
@interface BMDSLTableMap : BMDSL <BMTableStreamQuery> {
    BMTableSchema * _schema;
    <BMDSLRowTransform> * _transform;
    BMDSL * _upstream;
}

@property (nonatomic, retain) BMTableSchema *schema;
@property (nonatomic, retain) <BMDSLRowTransform> *transform;
@property (nonatomic, retain) BMDSL *upstream;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bpsPublisher;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUpstream:(id)arg1 transform:(id)arg2 schema:(id)arg3;
- (id)initWithUpstream:(id)arg1 transform:(id)arg2 schema:(id)arg3 name:(id)arg4 version:(unsigned int)arg5;
- (id)schema;
- (id)select:(id)arg1;
- (void)setSchema:(id)arg1;
- (void)setTransform:(id)arg1;
- (void)setUpstream:(id)arg1;
- (id)transform;
- (id)upstream;
- (id)upstreams;

@end
