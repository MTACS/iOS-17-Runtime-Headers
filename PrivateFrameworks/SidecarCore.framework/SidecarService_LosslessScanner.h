
@interface SidecarService_LosslessScanner : SidecarService

+ (long long)minimumRapportVersion;
+ (id)name;
+ (id)returnTypes;

- (id)localizedDescription;
- (id)localizedItemName;
- (id)makeRequest;
- (id)serviceExtension;
- (id)serviceIdentifier;

@end
