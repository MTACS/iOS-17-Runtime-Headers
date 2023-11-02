
@interface PUMessageActivity : UIMessageActivity <PXMomentShareSuggestionHandlingActivity> {
    <PXActivityItemSourceController> * _itemSourceController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PXActivityItemSourceController> *itemSourceController;
@property (readonly) Class superclass;

+ (bool)canPerformActivityAsIndividualItemsInSourceController:(id)arg1;

- (void).cxx_destruct;
- (void)_prepareWithMomentShareLink:(id)arg1;
- (id)activityViewController;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)itemSourceController;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setItemSourceController:(id)arg1;

@end
