
@interface AVTStickerRecentsPresetsProvider : NSObject

+ (void)filteredAndPaddedStickerRecordsWithRecents:(id)arg1 excludingRecords:(id)arg2 paddingMemojiIdentifier:(id)arg3 avatarStore:(id)arg4 numberOfStickers:(long long)arg5 resultBlock:(id /* block */)arg6;
+ (id)filteredRecentStickers:(id)arg1 withAvailableRecordIdentifiersMap:(id)arg2;
+ (id)paddedStickerRecordsWithRecents:(id)arg1 excludingRecords:(id)arg2 paddingMemojiIdentifier:(id)arg3 numberOfStickers:(long long)arg4;
+ (id)paddedStickerRecordsWithRecents:(id)arg1 paddingMemojiIdentifier:(id)arg2 numberOfStickers:(long long)arg3;
+ (id)presetsGivenNoMemoji;
+ (id)presetsGivenOneMemojiWithIdentifier:(id)arg1;

@end
