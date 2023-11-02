
@protocol MUPlaceSectionControllerDelegate <NSObject>

@required

- (void)placeSectionControllerDidUpdateContent:(MUPlaceSectionController *)arg1;
- (void)placeSectionControllerRequestsLayoutChange:(MUPlaceSectionController *)arg1;
- (UIView *)placeSectionControllerRequestsRootView:(MUPlaceSectionController *)arg1;

@end
