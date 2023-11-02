
@interface ICMediaAPIURLMappingSet : NSObject {
    NSArray * _responsePayload;
}

@property (nonatomic, readonly, copy) NSArray *responsePayload;

- (void).cxx_destruct;
- (void)enumerateMappingsUsingBlock:(id /* block */)arg1;
- (id)initWithResponsePayload:(id)arg1;
- (id)mappingsForFeatureName:(id)arg1;
- (id)responsePayload;

@end
