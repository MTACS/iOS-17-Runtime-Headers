
@protocol PREditingContentStyleItemsDataSourceDelegate <NSObject>

@required

- (PREditingPosterContentStyleCoordinator *)coordinatorForStyle:(id <PRPosterContentStyle>)arg1 isSuggestedStyle:(bool)arg2 fromDataSource:(id <PREditingContentStyleItemsDataSource>)arg3;

@end
