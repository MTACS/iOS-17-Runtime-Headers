
@protocol SPUIRemoteSearchViewDelegate <NSObject>

@required

- (void)dismissSearchView;

@optional

- (void)searchViewKeyboardPresentationStateDidChange;

@end
