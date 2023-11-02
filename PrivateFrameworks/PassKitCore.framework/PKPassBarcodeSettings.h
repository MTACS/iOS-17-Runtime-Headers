
@interface PKPassBarcodeSettings : NSObject <NSSecureCoding> {
    NSURL * _barcodeServiceURL;
    long long  _initialBarcodeFetchCount;
}

@property (nonatomic, readonly) NSURL *barcodeServiceURL;
@property (nonatomic, readonly) long long initialBarcodeFetchCount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)barcodeServiceURL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (long long)initialBarcodeFetchCount;

@end
