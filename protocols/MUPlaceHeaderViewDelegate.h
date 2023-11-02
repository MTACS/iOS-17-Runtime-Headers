
@protocol MUPlaceHeaderViewDelegate <NSObject>

@required

- (void)headerView:(MUPlaceHeaderView *)arg1 didSelectEnclosingMapItem:(MKMapItem *)arg2;
- (void)headerView:(MUPlaceHeaderView *)arg1 didSelectEnclosingMapItemIdentifier:(MKMapItemIdentifier *)arg2;

@optional

- (void)headerView:(MUPlaceHeaderView *)arg1 didSelectShareWithPresentationOptions:(MUPresentationOptions *)arg2;

@end
