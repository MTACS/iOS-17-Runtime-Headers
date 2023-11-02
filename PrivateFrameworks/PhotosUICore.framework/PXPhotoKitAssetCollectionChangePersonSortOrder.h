
@interface PXPhotoKitAssetCollectionChangePersonSortOrder : PXPhotoKitAssetCollectionActionPerformer

@property (nonatomic, readonly) NSString *activityType;

+ (bool)canPerformOnAssetCollectionReference:(id)arg1 withInputs:(id)arg2;
+ (id)createStandardActionForAssetCollectionReference:(id)arg1 withInput:(id)arg2 handler:(id /* block */)arg3;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollectionReference:(id)arg2 withInputs:(id)arg3;

- (void).cxx_destruct;
- (id)activityType;
- (id)initWithActionType:(id)arg1 assetCollectionReference:(id)arg2 displayTitleInfo:(id)arg3;
- (void)performUserInteractionTask;

@end
