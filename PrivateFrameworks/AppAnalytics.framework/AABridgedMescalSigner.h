
@interface AABridgedMescalSigner : NSObject {
    AMSBag * _bag;
}

@property (nonatomic, retain) AMSBag *bag;

- (void).cxx_destruct;
- (id)bag;
- (id)init;
- (void)setBag:(id)arg1;
- (id)signatureWithData:(id)arg1 error:(id*)arg2;

@end
