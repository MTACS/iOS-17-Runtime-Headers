
@interface IMDStickerRegistry : NSObject {
    NSMutableDictionary * _stickerPackGUIDToPackMap;
}

@property (retain) NSMutableDictionary *stickerPackGUIDToPackMap;

+ (id)sharedInstance;

- (id)_cachedPathForStickerWithProperties:(id)arg1;
- (bool)_isRecipeBasedSticker:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)retrieveStickerWithProperties:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setStickerPackGUIDToPackMap:(id)arg1;
- (id)stickerPackGUIDToPackMap;

@end
