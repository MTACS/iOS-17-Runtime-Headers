
@interface DDFlightAction : DDAction {
    UINavigationController * _viewController;
}

- (void).cxx_destruct;
- (void)adaptForPresentationInPopover:(bool)arg1;
- (void)closePressed;
- (bool)extractAirlineCode:(id*)arg1 flightNumber:(long long*)arg2;
- (id)iconName;
- (int)interactionType;
- (id)localizedName;
- (void)prepareViewControllerForActionController:(id)arg1;
- (id)quickActionTitle;
- (id)viewController;

@end
