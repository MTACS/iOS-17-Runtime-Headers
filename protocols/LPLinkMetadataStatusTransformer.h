
@protocol LPLinkMetadataStatusTransformer

@required

- (NSURL *)actionURLForTransformer:(LPLinkMetadataStatusTransformer *)arg1;
- (NSAttributedString *)statusForTransformer:(LPLinkMetadataStatusTransformer *)arg1;

@optional

- (void)destroyForTransformer:(LPLinkMetadataStatusTransformer *)arg1;
- (void)initializeForTransformer:(LPLinkMetadataStatusTransformer *)arg1;

@end
