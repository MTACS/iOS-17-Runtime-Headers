
@interface CRKConcreteTrust : NSObject <CRKTrust> {
    struct __SecTrust { } * _underlyingTrust;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CRKCertificate> *leafCertificate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct __SecTrust { }*underlyingTrust;

- (void)dealloc;
- (id)description;
- (id)initWithTrust:(struct __SecTrust { }*)arg1;
- (id)leafCertificate;
- (struct __SecTrust { }*)underlyingTrust;

@end
