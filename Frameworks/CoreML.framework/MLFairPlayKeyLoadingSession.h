
@interface MLFairPlayKeyLoadingSession : NSObject {
    NSString * _keyIdentifier;
    struct { unsigned int x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1; unsigned int x_4_1_2; unsigned char x_4_1_3[136]; unsigned int x_4_1_4; unsigned char x_4_1_5[4096]; unsigned char x_4_1_6[128]; } x4; struct { unsigned char x_5_1_1[16]; unsigned char x_5_1_2[16]; unsigned char x_5_1_3[16]; unsigned char x_5_1_4[128]; } x5; } * _sessionContext;
    unsigned int  _sessionID;
}

@property (copy) NSString *keyIdentifier;
@property struct { unsigned int x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1; unsigned int x_4_1_2; unsigned char x_4_1_3[136]; unsigned int x_4_1_4; unsigned char x_4_1_5[4096]; unsigned char x_4_1_6[128]; } x4; struct { unsigned char x_5_1_1[16]; unsigned char x_5_1_2[16]; unsigned char x_5_1_3[16]; unsigned char x_5_1_4[128]; } x5; }*sessionContext;
@property unsigned int sessionID;

- (void).cxx_destruct;
- (void)dealloc;
- (id)generateKeyRequestForKeyIdentifier:(id)arg1 teamIdentifier:(id)arg2 error:(id*)arg3;
- (id)generatePersistentKeyBlobFromKeyResponse:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)keyIdentifier;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1; unsigned int x_4_1_2; unsigned char x_4_1_3[136]; unsigned int x_4_1_4; unsigned char x_4_1_5[4096]; unsigned char x_4_1_6[128]; } x4; struct { unsigned char x_5_1_1[16]; unsigned char x_5_1_2[16]; unsigned char x_5_1_3[16]; unsigned char x_5_1_4[128]; } x5; }*)sessionContext;
- (unsigned int)sessionID;
- (void)setKeyIdentifier:(id)arg1;
- (void)setSessionContext:(struct { unsigned int x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1; unsigned int x_4_1_2; unsigned char x_4_1_3[136]; unsigned int x_4_1_4; unsigned char x_4_1_5[4096]; unsigned char x_4_1_6[128]; } x4; struct { unsigned char x_5_1_1[16]; unsigned char x_5_1_2[16]; unsigned char x_5_1_3[16]; unsigned char x_5_1_4[128]; } x5; }*)arg1;
- (void)setSessionID:(unsigned int)arg1;
- (id)transformKeyIdentifier:(id)arg1 error:(id*)arg2;

@end
