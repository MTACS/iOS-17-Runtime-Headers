
@interface FPXPCSanitizer : NSObject {
    NSString * _providerIdentifier;
}

@property (nonatomic, readonly) NSString *providerIdentifier;

+ (id)permittedErrorDomains;

- (void).cxx_destruct;
- (id)init;
- (id)initWithProviderDomainIdentifier:(id)arg1;
- (id)providerIdentifier;

@end
