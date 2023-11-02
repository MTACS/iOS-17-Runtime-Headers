
@interface MessageProtection.GLTDiversifiedKey : NSObject {
    void diversifiedKey;
    void trackingPreventionSalt;
}

@property (nonatomic, readonly) struct __SecKey { }*diversifiedKey;
@property (nonatomic, readonly) NSData *trackingPreventionSalt;

- (void).cxx_destruct;
- (struct __SecKey { }*)diversifiedKey;
- (id)init;
- (id)trackingPreventionSalt;

@end
