
@protocol LPMetadataProviderSpecializationDelegate <NSObject>

@required

- (void)metadataProviderSpecialization:(LPMetadataProviderSpecialization *)arg1 didCompleteWithMetadata:(LPLinkMetadata *)arg2;
- (void)metadataProviderSpecializationDidFail:(LPMetadataProviderSpecialization *)arg1;

@optional

- (void)metadataProviderSpecialization:(LPMetadataProviderSpecialization *)arg1 didFetchPreliminaryMetadata:(LPLinkMetadata *)arg2;

@end
