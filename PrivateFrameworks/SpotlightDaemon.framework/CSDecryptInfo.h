
@interface CSDecryptInfo : NSObject {
    NSData * _decryptInfo;
    NSString * _externalID;
}

@property (nonatomic, retain) NSData *decryptInfo;
@property (nonatomic, retain) NSString *externalID;

- (void).cxx_destruct;
- (id)decryptInfo;
- (id)externalID;
- (id)initWithPlistObject:(struct { char *x1; struct { unsigned int x_2_1_1; unsigned char x_2_1_2; } x2; })arg1 externalID:(id)arg2;
- (void)setDecryptInfo:(id)arg1;
- (void)setExternalID:(id)arg1;

@end
