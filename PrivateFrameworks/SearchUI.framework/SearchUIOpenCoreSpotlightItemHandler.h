
@interface SearchUIOpenCoreSpotlightItemHandler : SearchUIOpenUserActivityHandler

@property (readonly) SFOpenCoreSpotlightItemCommand *command;

- (id)createViewControllerForCommand:(id)arg1 environment:(id)arg2;
- (void)getUserActivityForCommand:(id)arg1 environment:(id)arg2 completionHandler:(id /* block */)arg3;

@end
