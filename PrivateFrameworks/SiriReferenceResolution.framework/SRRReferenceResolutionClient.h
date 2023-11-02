
@interface SRRReferenceResolutionClient : NSObject {
    SRRReferenceResolutionClientInternal * _underlyingObject;
}

@property (readonly) SRRReferenceResolutionClientInternal *underlyingObject;

- (void).cxx_destruct;
- (void)collectSalientEntityStringsWithCompletion:(id /* block */)arg1;
- (void)collectSalientStringsWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)underlyingObject;

@end
