
@interface BMDSLPersistentDerivatives : BMDSL {
    NSString * _tableName;
    BMDSL * _upstream;
    NSURL * _url;
}

@property (nonatomic, readonly) NSString *tableName;
@property (nonatomic, readonly) BMDSL *upstream;
@property (nonatomic, readonly) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bpsPublisher;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUpstream:(id)arg1 databaseURL:(id)arg2 derivedTableName:(id)arg3;
- (id)initWithUpstream:(id)arg1 databaseURL:(id)arg2 derivedTableName:(id)arg3 name:(id)arg4 version:(unsigned int)arg5;
- (id)tableName;
- (id)upstream;
- (id)upstreams;
- (id)url;

@end
