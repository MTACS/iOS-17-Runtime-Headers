
@protocol WBSStartPageRichLinkProxy <NSObject>

@required

- (SLAttributionView *)attributionView;
- (SLHighlight *)highlight;
- (LPLinkMetadata *)metadata;
- (void)setAttributionView:(SLAttributionView *)arg1;
- (void)setHighlight:(SLHighlight *)arg1;
- (void)setMetadata:(LPLinkMetadata *)arg1;

@end
