
@protocol WFInteractionCardViewControllerDelegate <NSObject>

@required

- (void)interactionCardViewControllerDidInvalidateSize:(WFInteractionCardViewController *)arg1;
- (void)interactionCardViewControllerDidLoad:(WFInteractionCardViewController *)arg1;
- (void)interactionCardViewControllerDidRequestCancel:(WFInteractionCardViewController *)arg1;
- (void)interactionCardViewControllerDidRequestPunchout:(WFInteractionCardViewController *)arg1;

@end
