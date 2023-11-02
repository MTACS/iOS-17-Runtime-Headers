
@protocol SHMediaLibraryItem <NSObject, NSCopying, NSSecureCoding>

@required

- (NSString *)identifier;
- (SHMediaLibraryItemMetadata *)metadata;

@end
