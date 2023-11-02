
@interface CryptexRemoteServiceNonce : NSObject {
    struct _img4_nonce { unsigned short x1; unsigned char x2[48]; unsigned int x3; } * _nonce;
}

@property (nonatomic, readonly) struct _img4_nonce { unsigned short x1; unsigned char x2[48]; unsigned int x3; }*nonce;

- (void)dealloc;
- (id)initWithNonce:(const struct _img4_nonce { unsigned short x1; unsigned char x2[48]; unsigned int x3; }*)arg1;
- (struct _img4_nonce { unsigned short x1; unsigned char x2[48]; unsigned int x3; }*)nonce;

@end
