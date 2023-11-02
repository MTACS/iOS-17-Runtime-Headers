
@protocol LPLinkMetadataSharedObjectTransformer <NSObject>

@required

- (LPImage *)sharedObjectIconForTransformer:(LPLinkMetadataPresentationTransformer *)arg1;
- (NSString *)sharedObjectInformationForTransformer:(LPLinkMetadataPresentationTransformer *)arg1;
- (bool)sharedObjectPrefersIconAsImageForTransformer:(LPLinkMetadataPresentationTransformer *)arg1;
- (NSString *)sharedObjectSubtitleForTransformer:(LPLinkMetadataPresentationTransformer *)arg1;
- (NSString *)sharedObjectTitleForTransformer:(LPLinkMetadataPresentationTransformer *)arg1;

@optional

- (NSString *)sharedObjectPreviewSummaryForTransformer:(LPLinkMetadataPreviewTransformer *)arg1;

@end
