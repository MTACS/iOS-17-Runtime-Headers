
@interface CNDDonorExtension : NSObject {
    NSExtension * _extension;
    <CNDonationExtensionLogger> * _logger;
}

@property (nonatomic, readonly) NSExtension *extension;
@property (nonatomic, readonly) <CNDonationExtensionLogger> *logger;

- (void).cxx_destruct;
- (id)description;
- (id)extension;
- (id)initWithExtension:(id)arg1;
- (id)initWithExtension:(id)arg1 logger:(id)arg2;
- (id)logger;
- (void)redonateAllValuesWithReason:(unsigned long long)arg1;
- (void)renewExpirationDateForDonatedValue:(id)arg1 acknowledgementHandler:(id /* block */)arg2;

@end
