
@interface PCCKey : NSObject {
    struct pcc_invocation_key { unsigned char x1[32]; } * _secret;
}

@property struct pcc_invocation_key { unsigned char x1[32]; }*secret;

- (void)clear;
- (void)dealloc;
- (id)decrypt:(id)arg1;
- (id)encrypt:(id)arg1;
- (id)init;
- (struct pcc_invocation_key { unsigned char x1[32]; }*)secret;
- (void)setSecret:(struct pcc_invocation_key { unsigned char x1[32]; }*)arg1;

@end
