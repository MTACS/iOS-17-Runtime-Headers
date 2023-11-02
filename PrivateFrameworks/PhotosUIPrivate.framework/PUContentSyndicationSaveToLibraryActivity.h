
@interface PUContentSyndicationSaveToLibraryActivity : UIActivity <PXActivity> {
    <PXActivityItemSourceController> * itemSourceController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PXActivityItemSourceController> *itemSourceController;
@property (readonly) Class superclass;

+ (long long)activityCategory;

- (void).cxx_destruct;
- (id)_systemImageName;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)itemSourceController;
- (void)performActivity;
- (void)setItemSourceController:(id)arg1;

@end
