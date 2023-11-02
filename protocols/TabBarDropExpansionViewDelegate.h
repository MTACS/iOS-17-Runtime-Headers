
@protocol TabBarDropExpansionViewDelegate <NSObject>

@optional

- (void)tabBarDropExpansionView:(TabBarDropExpansionView *)arg1 didBeginTrackingDropSession:(id <UIDropSession>)arg2;
- (void)tabBarDropExpansionView:(TabBarDropExpansionView *)arg1 didEndTrackingDropSession:(id <UIDropSession>)arg2;

@end
