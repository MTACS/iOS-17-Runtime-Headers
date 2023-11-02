
@interface GLTDiversifiedKeyAndTPS : NSObject {
    struct __SecKey { } * _diversifiedKey;
    NSData * _trackingPreventionSalt;
}

@property (nonatomic, readonly) struct __SecKey { }*diversifiedKey;
@property (nonatomic, readonly) NSData *trackingPreventionSalt;

- (void).cxx_destruct;
- (struct __SecKey { }*)diversifiedKey;
- (id)initWithKey:(struct __SecKey { }*)arg1 trackingPreventionSalt:(id)arg2;
- (id)trackingPreventionSalt;

@end
