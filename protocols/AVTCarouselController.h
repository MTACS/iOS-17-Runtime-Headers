
@protocol AVTCarouselController <AVTObjectViewController>

@required

- (bool)allowsCreate;
- (double)decelerationRate;
- (void)displayAvatarRecordWithIdentifier:(NSString *)arg1 animated:(bool)arg2;
- (<AVTAvatarRecord> *)focusedRecord;
- (bool)isPostponingBeginSession;
- (void)presentActionsForAvatar:(id <AVTAvatarRecord>)arg1;
- (void)presentEditorForCreatingAvatar:(id)arg1;
- (void)reloadData;
- (void)setAllowsCreate:(bool)arg1;
- (void)setAllowsCreate:(bool)arg1 animated:(bool)arg2;
- (void)setDecelerationRate:(double)arg1;
- (void)setIsPostponingBeginSession:(bool)arg1;
- (void)setSingleAvatarMode:(bool)arg1;
- (void)setSingleAvatarMode:(bool)arg1 fillContainer:(bool)arg2 animated:(bool)arg3;
- (bool)singleAvatarMode;
- (<AVTUIViewSnapshotProvider> *)snapshotProviderFocusedOnRecordWithIdentifier:(NSString *)arg1 size:(struct CGSize { double x1; double x2; })arg2;

@end
