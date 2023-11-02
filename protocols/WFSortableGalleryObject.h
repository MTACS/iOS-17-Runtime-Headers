
@protocol WFSortableGalleryObject <NSObject>

@required

- (NSString *)language;
- (long long)minVersion;
- (NSString *)name;
- (NSString *)persistentIdentifier;

@end
