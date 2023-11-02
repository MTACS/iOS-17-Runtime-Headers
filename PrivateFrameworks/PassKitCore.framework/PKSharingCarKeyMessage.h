
@interface PKSharingCarKeyMessage : PKSharingGenericMessage

@property (nonatomic, readonly) NSDictionary *carKeySharingDict;
@property (nonatomic, readonly) NSString *friendKeyIdentifier;
@property (nonatomic, readonly) NSString *shareIdentifier;
@property (nonatomic, readonly) NSString *shareSessionIdentifier;
@property (nonatomic, readonly) NSData *underlyingPayload;

+ (bool)supportsSecureCoding;

- (id)carKeySharingDict;
- (bool)configureWithContent:(id)arg1;
- (id)friendKeyIdentifier;
- (id)initWithRawMessage:(id)arg1 type:(unsigned long long)arg2 shareIdentifier:(id)arg3 friendKeyIdentifier:(id)arg4 carKeySharingDict:(id)arg5;
- (id)messageWithBindingAttestation:(id)arg1;
- (id)shareIdentifier;
- (id)shareSessionIdentifier;
- (id)underlyingPayload;

@end
