
@protocol AXAssetAssertion <NSObject>

@required

+ (id)assertionWithPropertyListRepresentation:(NSDictionary *)arg1 error:(id*)arg2;

- (NSString *)assetType;
- (NSString *)clientIdentifier;
- (NSDictionary *)propertyListRepresentation;

@end
