
@protocol SFUILoadedMetadataCollectionDelegate <NSObject>

@required

- (void)metadataCollection:(SFUILoadedMetadataCollection *)arg1 didChangeMetadata:(LPLinkMetadata *)arg2;
- (void)metadataCollectionDidFinishLoading:(SFUILoadedMetadataCollection *)arg1;

@end
