
@protocol MUShareSheetPresenterDelegate <NSObject>

@required

- (void)shareSheetPresenter:(MUShareSheetPresenter *)arg1 postCompletedActivityOfType:(NSString *)arg2 completed:(bool)arg3;
- (void)shareSheetPresenter:(MUShareSheetPresenter *)arg1 preCompletedActivityOfType:(NSString *)arg2 completed:(bool)arg3;

@optional

- (NSArray *)footerActivitiesForShareSheetPresenter:(MUShareSheetPresenter *)arg1;
- (MUActivityViewController *)shareSheetPresenterRequestsOverridenActivityViewController:(MUShareSheetPresenter *)arg1;

@end
