
@interface CNDDonorLoader : NSObject {
    <CNDonationLoggerProvider> * _loggerProvider;
}

@property (nonatomic, readonly) <CNDonationLoggerProvider> *loggerProvider;

+ (id)continuousExtensionsObservable;
+ (id)currentExtensionsObservable;
+ (id)extensionAttributes;

- (void).cxx_destruct;
- (id)donorWithIdentifier:(id)arg1;
- (id)init;
- (id)loggerProvider;

@end
