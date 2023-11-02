
@interface ECDKIMVerificationContext : NSObject {
    NSData * _bodyData;
    NSArray * _dkimSignatureHeaders;
    ECRawMessageHeaders * _headers;
    bool  _requireFullBodySignature;
}

@property (nonatomic, readonly, copy) NSData *bodyData;
@property (nonatomic, copy) NSArray *dkimSignatureHeaders;
@property (nonatomic, readonly) ECRawMessageHeaders *headers;
@property (nonatomic) bool requireFullBodySignature;

- (void).cxx_destruct;
- (id)bodyData;
- (id)dkimSignatureHeaders;
- (id)headers;
- (id)initWithHeaders:(id)arg1 bodyData:(id)arg2 dkimSignatureHeaders:(id)arg3;
- (void)removeDKIMSignatureHeaders:(id)arg1;
- (bool)requireFullBodySignature;
- (void)setDkimSignatureHeaders:(id)arg1;
- (void)setRequireFullBodySignature:(bool)arg1;

@end
