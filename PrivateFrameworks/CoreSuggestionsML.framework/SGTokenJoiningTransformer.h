
@interface SGTokenJoiningTransformer : NSObject <PMLTransformerProtocol> {
    NSString * _separator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSString *separator;
@property (readonly) Class superclass;

+ (id)withSeparator:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)initWithSeparator:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSGTokenJoiningTransformer:(id)arg1;
- (id)separator;
- (void)setSeparator:(id)arg1;
- (id)toPlistWithChunks:(id)arg1;
- (id)transform:(id)arg1;

@end
