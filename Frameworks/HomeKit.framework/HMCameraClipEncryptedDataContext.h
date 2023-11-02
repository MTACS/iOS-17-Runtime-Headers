
@interface HMCameraClipEncryptedDataContext : NSObject <NSCopying> {
    NSData * _ciphertext;
    NSData * _initializationVector;
    NSData * _tag;
}

@property (readonly, copy) NSData *ciphertext;
@property (readonly, copy) NSData *dataRepresentation;
@property (readonly, copy) NSData *initializationVector;
@property (readonly, copy) NSData *tag;

- (void).cxx_destruct;
- (id)ciphertext;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataRepresentation;
- (id)description;
- (unsigned long long)hash;
- (id)initWithDataRepresentation:(id)arg1;
- (id)initWithInitializationVector:(id)arg1 ciphertext:(id)arg2 tag:(id)arg3;
- (id)initializationVector;
- (bool)isEqual:(id)arg1;
- (id)tag;

@end
