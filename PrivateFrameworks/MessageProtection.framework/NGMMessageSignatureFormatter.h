
@interface NGMMessageSignatureFormatter : NSObject <SignatureFormatter> {
    NSData * _formattedSignedData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSData *formattedSignedData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)formattedSignedData;
- (id)initWithDHOutput:(id)arg1 prekeyPub:(id)arg2 ephemeralPub:(id)arg3 recipientPub:(id)arg4 ciphertext:(id)arg5;
- (id)signedData;

@end
