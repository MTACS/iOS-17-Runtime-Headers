
@interface CNPRSPosterConfigurationAttributes : NSObject {
    PRSPosterConfigurationAttributes * _wrappedPosterAttributes;
}

@property (nonatomic, readonly) NSString *extensionIdentifier;
@property (nonatomic, readonly, copy) PRSPosterConfigurationAttributes *wrappedPosterAttributes;

- (void).cxx_destruct;
- (id)extensionIdentifier;
- (id)initWithCNConfiguration:(id)arg1;
- (id)wrappedPosterAttributes;

@end
