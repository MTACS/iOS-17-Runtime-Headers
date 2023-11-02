
@protocol MUContactSharedLocationSectionControllerDelegate <NSObject>

@required

- (void)contactSharedLocationSectionController:(MUContactSharedLocationSectionController *)arg1 selectedDirectionsWithAddress:(CNLabeledValue *)arg2 forContact:(CNContact *)arg3 options:(MUPresentationOptions *)arg4;

@end
