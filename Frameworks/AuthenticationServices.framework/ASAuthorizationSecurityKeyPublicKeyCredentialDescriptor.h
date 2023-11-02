
@interface ASAuthorizationSecurityKeyPublicKeyCredentialDescriptor : NSObject <ASAuthorizationPublicKeyCredentialDescriptor> {
    NSData * _credentialID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _internalLock;
    NSArray * _transports;
}

@property (nonatomic, readonly) ASCPublicKeyCredentialDescriptor *coreDescriptor;
@property (nonatomic, copy) NSData *credentialID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *transports;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coreDescriptor;
- (id)credentialID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCredentialID:(id)arg1 transports:(id)arg2;
- (void)setCredentialID:(id)arg1;
- (void)setTransports:(id)arg1;
- (id)transports;

@end
