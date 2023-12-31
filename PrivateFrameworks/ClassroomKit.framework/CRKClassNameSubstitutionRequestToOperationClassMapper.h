
@interface CRKClassNameSubstitutionRequestToOperationClassMapper : NSObject <CRKRequestToOperationClassMapping> {
    NSArray * mAllowedPrefixes;
    NSString * mOperationPrefix;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithAllowedRequestPrefixes:(id)arg1 operationPrefix:(id)arg2;
- (Class)operationClassForRequest:(id)arg1;
- (id)prefixForString:(id)arg1;
- (id)stringByApplyingOperationPrefixToString:(id)arg1;
- (id)stringByApplyingOperationSuffixToString:(id)arg1;

@end
