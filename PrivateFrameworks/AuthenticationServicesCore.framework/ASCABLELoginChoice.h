
@interface ASCABLELoginChoice : NSObject <ASCLoginChoiceProtocol> {
    NSURL * _qrCodeURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSharedCredential;
@property (nonatomic, readonly) unsigned long long loginChoiceKind;
@property (nonatomic, readonly, copy) NSURL *qrCodeURL;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithQRCodeURL:(id)arg1;
- (unsigned long long)loginChoiceKind;
- (id)qrCodeURL;

@end
