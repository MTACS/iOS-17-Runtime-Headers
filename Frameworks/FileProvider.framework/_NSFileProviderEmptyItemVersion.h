
@interface _NSFileProviderEmptyItemVersion : NSFileProviderItemVersion

+ (id)emptyVersion;
+ (bool)supportsSecureCoding;

- (id)contentVersion;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)metadataVersion;

@end
