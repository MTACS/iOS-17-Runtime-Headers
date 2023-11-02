
@interface PKBarcodeEventSignatureResponse : NSObject <NSSecureCoding> {
    NSData * _signedData;
}

@property (nonatomic, copy) NSData *signedData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSignedData:(id)arg1;
- (void)setSignedData:(id)arg1;
- (id)signedData;

@end
