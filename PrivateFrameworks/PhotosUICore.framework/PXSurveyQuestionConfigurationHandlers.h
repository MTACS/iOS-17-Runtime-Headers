
@interface PXSurveyQuestionConfigurationHandlers : NSObject {
    id /* block */  _didSelectAssetHandler;
    id /* block */  _presentViewControllerHandler;
    id /* block */  _pushViewControllerHandler;
}

@property (nonatomic, copy) id /* block */ didSelectAssetHandler;
@property (nonatomic, copy) id /* block */ presentViewControllerHandler;
@property (nonatomic, copy) id /* block */ pushViewControllerHandler;

- (void).cxx_destruct;
- (id /* block */)didSelectAssetHandler;
- (id /* block */)presentViewControllerHandler;
- (id /* block */)pushViewControllerHandler;
- (void)setDidSelectAssetHandler:(id /* block */)arg1;
- (void)setPresentViewControllerHandler:(id /* block */)arg1;
- (void)setPushViewControllerHandler:(id /* block */)arg1;

@end
