
@interface RBSHandshakeResponse : NSObject <RBSXPCSecureCoding> {
    NSDictionary * _assertionErrorsByOldIdentifier;
    NSDictionary * _assertionIdentifiersByOldIdentifier;
    RBSProcessHandle * _handle;
}

@property (nonatomic, retain) NSDictionary *assertionErrorsByOldIdentifier;
@property (nonatomic, retain) NSDictionary *assertionIdentifiersByOldIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) RBSProcessHandle *handle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsRBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)assertionErrorsByOldIdentifier;
- (id)assertionIdentifiersByOldIdentifier;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)handle;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAssertionErrorsByOldIdentifier:(id)arg1;
- (void)setAssertionIdentifiersByOldIdentifier:(id)arg1;
- (void)setHandle:(id)arg1;

@end
