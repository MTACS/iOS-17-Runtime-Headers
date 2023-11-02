
@protocol _SFPBMessageAttachment <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSData *)linkMetadata;
- (_SFPBPhotosLibraryImage *)photosLibraryImage;
- (void)setLinkMetadata:(NSData *)arg1;
- (void)setPhotosLibraryImage:(_SFPBPhotosLibraryImage *)arg1;
- (void)setType:(int)arg1;
- (void)setUrl:(_SFPBURL *)arg1;
- (int)type;
- (_SFPBURL *)url;

@end
