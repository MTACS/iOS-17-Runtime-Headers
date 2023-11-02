
@interface PKIdentityRequest : NSObject {
    NSString * _context;
    <PKIdentityDocumentDescriptor> * _descriptor;
    NSString * _merchantIdentifier;
    NSData * _nonce;
}

@property (nonatomic, copy) NSString *context;
@property (nonatomic, retain) <PKIdentityDocumentDescriptor> *descriptor;
@property (nonatomic, copy) NSString *merchantIdentifier;
@property (nonatomic, copy) NSData *nonce;

- (void).cxx_destruct;
- (id)asDIIdentityRequest;
- (id)context;
- (id)description;
- (id)descriptor;
- (id)merchantIdentifier;
- (id)nonce;
- (void)setContext:(id)arg1;
- (void)setDescriptor:(id)arg1;
- (void)setMerchantIdentifier:(id)arg1;
- (void)setNonce:(id)arg1;

@end
