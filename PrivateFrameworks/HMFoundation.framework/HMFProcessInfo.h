
@interface HMFProcessInfo : HMFObject <HMFLogging> {
    NSString * _applicationIdentifier;
    struct { unsigned int x1[8]; } * _auditToken;
    NSURL * _executableURL;
    int  _identifier;
    NSURL * _mainBundleURL;
    NSString * _name;
    NSString * _signingIdentifier;
}

@property (readonly, copy) NSString *applicationIdentifier;
@property (getter=isCodeSigned, readonly, copy) HMFBoolean *codeSigned;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSURL *executableURL;
@property (readonly) unsigned long long hash;
@property (readonly) int identifier;
@property (readonly, copy) NSBundle *mainBundle;
@property (readonly, copy) NSURL *mainBundleURL;
@property (readonly, copy) NSString *name;
@property (getter=isPlatformBinary, readonly, copy) HMFBoolean *platformBinary;
@property (readonly, copy) NSString *signingIdentifier;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)processInfo;
+ (id)processInfoForXPCConnection:(id)arg1;

- (void).cxx_destruct;
- (id)applicationIdentifier;
- (id)attributeDescriptions;
- (void)dealloc;
- (id)executableURL;
- (bool)getAuditToken:(struct { unsigned int x1[8]; }*)arg1;
- (unsigned long long)hash;
- (int)identifier;
- (id)init;
- (id)initWithAuditToken:(struct { unsigned int x1[8]; })arg1;
- (id)initWithIdentifier:(int)arg1;
- (id)isCodeSigned;
- (bool)isEqual:(id)arg1;
- (id)isPlatformBinary;
- (id)logIdentifier;
- (id)mainBundle;
- (id)mainBundleURL;
- (id)name;
- (id)shortDescription;
- (id)signingIdentifier;
- (id)valueForEntitlement:(id)arg1;

@end
