
@protocol MUPlaceCardActionsRowViewDelegate <NSObject>

@required

- (void)actionsRowView:(MUGroupedActionsRowView *)arg1 didSelectViewModel:(MUActionRowItemViewModel *)arg2 presentationOptions:(MUPresentationOptions *)arg3;

@optional

- (void)actionsRowView:(MUGroupedActionsRowView *)arg1 didPresentMenuForViewModel:(MUActionRowItemViewModel *)arg2;

@end
