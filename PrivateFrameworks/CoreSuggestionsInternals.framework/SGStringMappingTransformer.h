
@interface SGStringMappingTransformer : NSObject <PMLTransformerProtocol> {
    NSDictionary * _mappings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSDictionary *mappings;
@property (readonly) Class superclass;

+ (id)withMappings:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithHelperMappingType:(id)arg1 andLanguage:(id)arg2;
- (id)initWithMappings:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToStringMappingTransformer:(id)arg1;
- (id)mappings;
- (void)setMappings:(id)arg1;
- (id)toPlistWithChunks:(id)arg1;
- (id)transform:(id)arg1;
- (id)withHelperMappingType:(id)arg1 andLanguage:(id)arg2;

@end
