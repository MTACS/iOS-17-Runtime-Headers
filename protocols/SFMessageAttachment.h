
@protocol SFMessageAttachment <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (NSData *)linkMetadata;
- (SFPhotosLibraryImage *)photosLibraryImage;
- (void)setLinkMetadata:(NSData *)arg1;
- (void)setPhotosLibraryImage:(SFPhotosLibraryImage *)arg1;
- (void)setType:(int)arg1;
- (void)setUrl:(NSURL *)arg1;
- (int)type;
- (NSURL *)url;

@end
