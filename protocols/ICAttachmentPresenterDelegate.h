
@protocol ICAttachmentPresenterDelegate <NSObject>

@required

- (UIView *)attachmentPresenter:(ICAttachmentPresenter *)arg1 transitionViewForAttachment:(ICAttachment *)arg2;

@optional

- (UIView *)attachmentPresenter:(ICAttachmentPresenter *)arg1 transitionViewForIndexPath:(NSIndexPath *)arg2;
- (bool)attachmentPresenter:(ICAttachmentPresenter *)arg1 useFullPDFTransitionForAttachment:(ICAttachment *)arg2;
- (void)attachmentPresenterDidDismiss:(ICAttachmentPresenter *)arg1;
- (void)attachmentPresenterWillPresent:(ICAttachmentPresenter *)arg1;
- (void)handleDeleteAttachmentFromPresenter:(ICAttachmentPresenter *)arg1;
- (bool)isAttachmentBrowser;
- (void)scrollCollectionViewToIndexPath:(NSIndexPath *)arg1;

@end
