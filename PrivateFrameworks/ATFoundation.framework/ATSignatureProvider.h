
@interface ATSignatureProvider : NSObject

- (id)createSignature:(id*)arg1 forData:(id)arg2;
- (id)verifySignature:(id)arg1 forData:(id)arg2;

@end
