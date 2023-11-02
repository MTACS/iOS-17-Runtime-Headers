
@protocol NSFileProviderServiceSource_Private <NSFileProviderServiceSource>

@required

- (id)initWithItemIdentifier:(NSString *)arg1 domain:(NSFileProviderDomain *)arg2 extension:(id <NSFileProviderServicing>)arg3;

@optional

- (NSString *)requiredEntitlement;

@end
