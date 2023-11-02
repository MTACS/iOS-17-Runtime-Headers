
@interface NGMPrekeySignatureFormatter : NSObject <SignatureFormatter> {
    NSData * _prekeyPublic;
    double  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *prekeyPublic;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timestamp;

- (void).cxx_destruct;
- (id)initToSignKey:(id)arg1;
- (id)initWithPublicPrekey:(id)arg1;
- (id)prekeyPublic;
- (id)signedData;
- (double)timestamp;

@end
