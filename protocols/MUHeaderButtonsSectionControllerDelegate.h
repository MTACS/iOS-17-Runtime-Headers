
@protocol MUHeaderButtonsSectionControllerDelegate <NSObject>

@required

- (void)headerButtonsSectionController:(MUHeaderButtonsSectionController *)arg1 didSelectPrimaryType:(unsigned long long)arg2 withPresentationOptions:(MUPresentationOptions *)arg3;
- (void)headerButtonsSectionControllerDidUpdateContent:(MUHeaderButtonsSectionController *)arg1;

@optional

- (void)headerButtonsSectionControllerWillPresentMenu:(MUHeaderButtonsSectionController *)arg1;

@end
