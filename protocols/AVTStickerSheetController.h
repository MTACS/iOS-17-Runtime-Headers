
@protocol AVTStickerSheetController <AVTObjectViewController>

@required

- (<AVTAvatarRecord> *)avatarRecord;
- (<AVTStickerSheetControllerDelegate> *)delegate;
- (<AVTStickerDisclosureValidationDelegate> *)disclosureValidationDelegate;
- (UIView *)firstStickerView;
- (void)scrollToContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionInsets;
- (void)setDelegate:(id <AVTStickerSheetControllerDelegate>)arg1;
- (void)setDisclosureValidationDelegate:(id <AVTStickerDisclosureValidationDelegate>)arg1;
- (void)setSectionInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)sheetDidDisappear;
- (void)sheetWillAppear;
- (void)startAllSchedulerTasks;

@optional

- (void)clearStickerSelection;
- (void)selectStickerWithIdentifier:(NSString *)arg1;

@end
