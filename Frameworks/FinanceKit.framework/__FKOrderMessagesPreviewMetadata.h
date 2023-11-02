
@interface __FKOrderMessagesPreviewMetadata : NSObject {
    void backgroundColor;
    void image;
    void primaryText;
    void secondaryText;
    void tertiaryText;
}

@property (nonatomic, readonly) struct CGColor { }*backgroundColor;
@property (nonatomic, readonly) __FKOrderMessagesPreviewMetadataImage *image;
@property (nonatomic, readonly) __FKOrderMessagesPreviewMetadataText *primaryText;
@property (nonatomic, readonly) __FKOrderMessagesPreviewMetadataText *secondaryText;
@property (nonatomic, readonly) __FKOrderMessagesPreviewMetadataText *tertiaryText;

+ (id)createWalletDeepLinkForExistingOrderAt:(id)arg1;

- (void).cxx_destruct;
- (struct CGColor { }*)backgroundColor;
- (id)image;
- (id)init;
- (id)initWithOrderData:(id)arg1 error:(id*)arg2;
- (id)initWithOrderData:(id)arg1 workingDirectory:(id)arg2 error:(id*)arg3;
- (id)primaryText;
- (id)secondaryText;
- (id)tertiaryText;

@end
