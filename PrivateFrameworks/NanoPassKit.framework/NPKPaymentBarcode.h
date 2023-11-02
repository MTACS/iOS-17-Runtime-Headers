
@interface NPKPaymentBarcode : NSObject {
    NSString * _barcodeIdentifier;
    NSArray * _barcodes;
    NSData * _decryptedBarcodeCredential;
    unsigned long long  _state;
}

@property (nonatomic, retain) NSString *barcodeIdentifier;
@property (nonatomic, retain) NSArray *barcodes;
@property (nonatomic, retain) NSData *decryptedBarcodeCredential;
@property (nonatomic) unsigned long long state;

- (void).cxx_destruct;
- (id)barcodeIdentifier;
- (id)barcodes;
- (id)decryptedBarcodeCredential;
- (id)description;
- (id)initWithBarcodeIdentifier:(id)arg1 decryptedBarcodeCredential:(id)arg2 error:(id)arg3;
- (bool)isEqual:(id)arg1;
- (void)setBarcodeIdentifier:(id)arg1;
- (void)setBarcodes:(id)arg1;
- (void)setDecryptedBarcodeCredential:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;

@end
