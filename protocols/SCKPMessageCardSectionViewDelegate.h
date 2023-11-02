
@protocol SCKPMessageCardSectionViewDelegate

@required

- (void)messageCardSectionAttachmentTapped:(SCKPMessageCardSectionView *)arg1;
- (void)messageCardSectionContentUpdated:(SCKPMessageCardSectionView *)arg1;
- (void)messageCardSectionPlayButtonTapped:(SCKPMessageCardSectionView *)arg1;
- (void)messageCardSectionSendButtonTapped:(SCKPMessageCardSectionView *)arg1;
- (void)messageCardSectionViewBeganEditing:(SCKPMessageCardSectionView *)arg1;
- (void)messageCardSectionViewFinishedEditing:(SCKPMessageCardSectionView *)arg1;

@end
