
@interface PUSaveToCameraRollActivity : UISaveToCameraRollActivity <PXActivity> {
    <PXActivityItemSourceController> * _itemSourceController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PXActivityItemSourceController> *itemSourceController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_itemIsVideoAtURL:(id)arg1;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)itemSourceController;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setItemSourceController:(id)arg1;

@end
