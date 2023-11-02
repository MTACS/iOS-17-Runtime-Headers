
@protocol MUPlaceVerticalCardContainerViewDelegate <NSObject>

@required

- (void)verticalCardContainerView:(MUPlaceVerticalCardContainerView *)arg1 didSelectRow:(UIView *)arg2 atIndex:(unsigned long long)arg3;

@optional

- (bool)verticalCardContainerView:(MUPlaceVerticalCardContainerView *)arg1 shouldHighlightRowAtIndex:(unsigned long long)arg2;

@end
