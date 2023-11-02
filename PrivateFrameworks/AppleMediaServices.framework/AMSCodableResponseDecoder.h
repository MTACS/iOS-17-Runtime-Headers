
@interface AMSCodableResponseDecoder : NSObject <AMSResponseDecoding> {
    void rootClass;
}

- (id)init;
- (id)initWithRootClass:(Class)arg1;
- (id)resultFromResult:(id)arg1 error:(id*)arg2;

@end
