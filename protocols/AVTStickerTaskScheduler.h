
@protocol AVTStickerTaskScheduler <AVTTaskScheduler>

@required

- (void)cancelPickerTask:(void *)arg1 avatarRecordIdentifier:(void *)arg2; // needs 2 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*, NSString *
- (void)cancelStickerSheetTasksForAvatarRecordIdentifier:(NSString *)arg1;
- (void)lowerStickerPickerTaskPriority:(void *)arg1 avatarRecordIdentifier:(void *)arg2; // needs 2 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*, NSString *
- (void)scheduleStickerTask:(AVTStickerTask *)arg1;
- (void)setSelectedAvatarRecordIdentifier:(NSString *)arg1;
- (void)setVisibleIndexPaths:(NSArray *)arg1;

@end
