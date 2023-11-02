
@interface SFRSASigningOperation : NSObject <SFSigningOperation> {
    id  _rsaSigningOperationInternal;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) <SFDigestOperation> *digestOperation;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) _SFRSAKeySpecifier *signingKeySpecifier;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)digestOperation;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeySpecifier:(id)arg1;
- (id)initWithKeySpecifier:(id)arg1 digestOperation:(id)arg2;
- (void)setDigestOperation:(id)arg1;
- (void)setSigningKeySpecifier:(id)arg1;
- (id)sign:(id)arg1 withKey:(id)arg2 error:(id*)arg3;
- (id)signingKeySpecifier;
- (id)verify:(id)arg1 withKey:(id)arg2 error:(id*)arg3;

@end