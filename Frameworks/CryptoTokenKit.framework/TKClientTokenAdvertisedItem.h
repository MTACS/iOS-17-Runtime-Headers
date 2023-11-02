
@interface TKClientTokenAdvertisedItem : NSObject {
    NSDictionary * _keychainAttributes;
    id  _secRef;
    TKClientTokenSession * _session;
}

@property (nonatomic, readonly) struct __SecCertificate { }*certificateRef;
@property (nonatomic, readonly) struct __SecIdentity { }*identityRef;
@property (nonatomic, readonly) struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*keyRef;
@property (nonatomic, readonly) unsigned long long keyUsage;
@property (nonatomic, readonly) NSDictionary *keychainAttributes;
@property (nonatomic, readonly) id keychainClass;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSData *objectID;
@property (nonatomic, readonly) TKClientTokenSession *session;

- (void).cxx_destruct;
- (struct __SecCertificate { }*)certificateRef;
- (struct __SecIdentity { }*)identityRef;
- (id)initWithSession:(id)arg1 keychainAttributes:(id)arg2 secRef:(id)arg3;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)keyRef;
- (unsigned long long)keyUsage;
- (id)keychainAttributes;
- (id)keychainClass;
- (id)localizedName;
- (id)objectID;
- (id)session;

@end
