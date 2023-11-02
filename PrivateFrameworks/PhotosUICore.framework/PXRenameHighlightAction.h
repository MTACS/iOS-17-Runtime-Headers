
@interface PXRenameHighlightAction : PXPhotosAction {
    PHObjectPlaceholder * _adaptiveHighlightPlaceholder;
    PHPhotosHighlight * _originalHighlight;
    NSString * _redoVerboseSmartDescription;
    NSString * _undoVerboseSmartDescription;
}

@property (nonatomic, retain) PHObjectPlaceholder *adaptiveHighlightPlaceholder;
@property (nonatomic, readonly) PHPhotosHighlight *originalHighlight;
@property (nonatomic, readonly, copy) NSString *redoVerboseSmartDescription;
@property (nonatomic, readonly, copy) NSString *undoVerboseSmartDescription;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)actionNameLocalizationKey;
- (id)adaptiveHighlightPlaceholder;
- (id)initWithHighlight:(id)arg1 verboseSmartDescription:(id)arg2;
- (id)originalHighlight;
- (void)performAction:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;
- (id)redoVerboseSmartDescription;
- (void)setAdaptiveHighlightPlaceholder:(id)arg1;
- (id)undoVerboseSmartDescription;

@end
