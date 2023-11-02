
@protocol EKEventDetailSuggestedLocationCellDelegate <NSObject>

@required

- (void)didTapAddSuggestedLocationCell:(EKEventDetailSuggestedLocationCell *)arg1 disambiguatedLocation:(EKStructuredLocation *)arg2;
- (void)didTapDismissSuggestedLocationCell:(EKEventDetailSuggestedLocationCell *)arg1;

@end
