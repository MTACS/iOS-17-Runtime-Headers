
@interface FKOrderMessagesPreviewMetadata : NSObject {
    struct CGColor { } * _backgroundColor;
    FKOrderMessagesPreviewMetadataImage * _headerImage;
    FKOrderMessagesPreviewMetadataText * _primaryText;
    FKOrderMessagesPreviewMetadataText * _secondaryText;
    FKOrderMessagesPreviewMetadataText * _tertiaryText;
}

@property (nonatomic, readonly) struct CGColor { }*backgroundColor;
@property (nonatomic, readonly) FKOrderMessagesPreviewMetadataImage *headerImage;
@property (nonatomic, readonly) FKOrderMessagesPreviewMetadataText *primaryText;
@property (nonatomic, readonly) FKOrderMessagesPreviewMetadataText *secondaryText;
@property (nonatomic, readonly) FKOrderMessagesPreviewMetadataText *tertiaryText;

+ (id)walletDeepLinkForExistingOrderAtURL:(id)arg1;

- (void).cxx_destruct;
- (struct CGColor { }*)backgroundColor;
- (void)dealloc;
- (id)headerImage;
- (id)initWithOrderData:(id)arg1 workingDirectory:(id)arg2 error:(id*)arg3;
- (id)primaryText;
- (id)secondaryText;
- (id)tertiaryText;

@end
