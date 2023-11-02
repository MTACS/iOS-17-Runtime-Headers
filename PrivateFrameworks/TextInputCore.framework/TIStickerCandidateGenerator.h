
@interface TIStickerCandidateGenerator : NSObject {
    CAContext * _context;
    TISceneTaxonomyGenerator * _sceneTaxonomyGenerator;
}

@property (nonatomic, readonly) CAContext *context;

- (void).cxx_destruct;
- (bool)_facadeSupportsStickersWithIdentifiers;
- (struct CGImage { }*)_scaledImageForStickerImage:(struct CGImage { }*)arg1 height:(double)arg2;
- (id)ckAttributionInfoFromSticker:(id)arg1;
- (id)context;
- (void)createContext;
- (void)createSceneTaxonomyGenerator;
- (id)generateKeyboardCandidatesForStickerRepresentations:(id)arg1;
- (id)generateKeyboardCandidatesForStickers:(id)arg1 withRenderTraits:(id)arg2;
- (void)generateStickerCandidatesForSearchableQueries:(id)arg1 withRenderTraits:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)generateStickerQueriesForText:(id)arg1;
- (id)init;
- (id)keyboardStickerRepresentationsForStickerIdentifier:(id)arg1 roles:(id)arg2;
- (id)keyboardStickerWithIdentifier:(id)arg1 roles:(id)arg2;
- (id)stickerRepresentationsForStickerIdentifiers:(id)arg1 roles:(id)arg2;
- (id)stickersForStickerIdentifiers:(id)arg1 roles:(id)arg2;

@end
