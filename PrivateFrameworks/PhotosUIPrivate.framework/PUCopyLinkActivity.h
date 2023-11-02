
@interface PUCopyLinkActivity : PXActivity <PXMomentShareActivity>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PXActivityItemSourceController> *itemSourceController;
@property (readonly) Class superclass;

+ (long long)activityCategory;
+ (bool)wantsMomentShareLinkForAssetCount:(long long)arg1;

- (id)_systemImageName;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)performActivity;

@end
