
@interface PUCopyToPasteboardActivity : UICopyToPasteboardActivity <PXActivity> {
    <PXActivityItemSourceController> * _itemSourceController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PXActivityItemSourceController> *itemSourceController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityTitle;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)itemSourceController;
- (void)setItemSourceController:(id)arg1;

@end
