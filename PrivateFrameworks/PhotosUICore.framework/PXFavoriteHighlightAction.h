
@interface PXFavoriteHighlightAction : PXPhotosAction {
    PHObjectPlaceholder * _adaptiveHighlightPlaceholder;
    bool  _favorite;
    PHPhotosHighlight * _originalHighlight;
}

@property (nonatomic, retain) PHObjectPlaceholder *adaptiveHighlightPlaceholder;
@property (nonatomic, readonly) bool favorite;
@property (nonatomic, readonly) PHPhotosHighlight *originalHighlight;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)actionNameLocalizationKey;
- (id)adaptiveHighlightPlaceholder;
- (bool)favorite;
- (id)initWithHighlight:(id)arg1 favorite:(bool)arg2;
- (id)originalHighlight;
- (void)performAction:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;
- (void)setAdaptiveHighlightPlaceholder:(id)arg1;

@end
