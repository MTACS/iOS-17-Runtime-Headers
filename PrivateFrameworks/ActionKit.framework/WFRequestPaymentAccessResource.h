
@interface WFRequestPaymentAccessResource : WFAccessResource

+ (bool)isSystemResource;

- (id)associatedAppIdentifier;
- (unsigned long long)status;

@end
