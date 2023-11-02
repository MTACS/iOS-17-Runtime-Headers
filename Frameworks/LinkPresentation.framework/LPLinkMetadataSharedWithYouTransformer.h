
@interface LPLinkMetadataSharedWithYouTransformer : NSObject {
    NSURL * _URL;
    LPLinkMetadata * _metadata;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly, copy) LPLinkMetadata *metadata;
@property (nonatomic, readonly) bool shouldDonateToSharedWithYou;

- (void).cxx_destruct;
- (id)URL;
- (id)initWithMetadata:(id)arg1 URL:(id)arg2;
- (id)metadata;
- (bool)shouldDonateToSharedWithYou;

@end
