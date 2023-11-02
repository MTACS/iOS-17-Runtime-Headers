
@interface SGNameMappingTransformer : NSObject <PMLTransformerProtocol> {
    id /* block */  _confidenceMapper;
    bool  _forNameDetector;
    int  _minimumConfidence;
    NSDictionary * _nameMappings;
    NSString * _tokenToIgnore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)instanceForNameDetector;
+ (id)withFullNameMapping:(id)arg1 firstNameMapping:(id)arg2 lastNameMapping:(id)arg3 andPossessive:(id)arg4;
+ (id)withFullNameMapping:(id)arg1 firstNameMapping:(id)arg2 lastNameMapping:(id)arg3 minimumConfidence:(int)arg4 confidenceMapper:(id /* block */)arg5 tokenToIgnore:(id)arg6 andPossessive:(id)arg7;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithNameMappings:(id)arg1 minimumConfidence:(int)arg2 confidenceMapper:(id /* block */)arg3 tokenToIgnore:(id)arg4 forNameDetector:(bool)arg5;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNameMappingTransformer:(id)arg1;
- (bool)isPossessive:(id)arg1;
- (id)nameMappingForToken:(id)arg1 withConfidence:(int*)arg2;
- (id)toPlistWithChunks:(id)arg1;
- (id)transform:(id)arg1;

@end
