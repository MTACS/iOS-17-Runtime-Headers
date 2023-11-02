
@protocol HKElectrocardiogramMetadataViewDelegate

@required

- (NSString *)electrocardiogramMetadataView:(HKElectrocardiogramMetadataView *)arg1 regulatedBodyTextForSample:(HKElectrocardiogram *)arg2;
- (void)electrocardiogramMetadataViewDidSelectShareRow:(HKElectrocardiogramMetadataView *)arg1;
- (void)electrocardiogramMetadataViewDidTapDetailButton:(HKElectrocardiogramMetadataView *)arg1;
- (bool)electrocardiogramMetadataViewShouldShowShareRow:(HKElectrocardiogramMetadataView *)arg1;

@end
