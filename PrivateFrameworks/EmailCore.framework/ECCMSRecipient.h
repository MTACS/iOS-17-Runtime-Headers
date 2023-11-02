
@interface ECCMSRecipient : NSObject {
    NSString * _address;
    NSArray * _capabilities;
    struct __SecCertificate { } * _certificate;
}

@property (nonatomic, readonly) NSString *address;
@property (nonatomic, readonly, copy) NSArray *capabilities;
@property (nonatomic, readonly) struct __SecCertificate { }*certificate;

- (void).cxx_destruct;
- (id)address;
- (id)capabilities;
- (struct __SecCertificate { }*)certificate;
- (void)dealloc;
- (id)initWithAddress:(id)arg1 certificate:(struct __SecCertificate { }*)arg2 capabilities:(id)arg3;

@end
