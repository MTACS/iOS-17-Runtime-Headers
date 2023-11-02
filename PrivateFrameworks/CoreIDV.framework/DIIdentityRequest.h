
@interface DIIdentityRequest : NSObject {
    NSString * _context;
    <DIIdentityDocumentDescriptor> * _descriptor;
    NSString * _merchantIdentifier;
    NSData * _nonce;
}

@property (nonatomic, copy) NSString *context;
@property (nonatomic, retain) <DIIdentityDocumentDescriptor> *descriptor;
@property (nonatomic, copy) NSString *merchantIdentifier;
@property (nonatomic, copy) NSData *nonce;

- (void).cxx_destruct;
- (id)context;
- (id)descriptor;
- (id)initWithDescriptor:(id)arg1 nonce:(id)arg2;
- (id)merchantIdentifier;
- (id)nonce;
- (void)setContext:(id)arg1;
- (void)setDescriptor:(id)arg1;
- (void)setMerchantIdentifier:(id)arg1;
- (void)setNonce:(id)arg1;

@end
