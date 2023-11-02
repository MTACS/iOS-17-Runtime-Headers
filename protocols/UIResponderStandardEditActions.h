
@protocol UIResponderStandardEditActions <NSObject>

@optional

- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)decreaseSize:(id)arg1;
- (void)delete:(id)arg1;
- (void)duplicate:(id)arg1;
- (void)export:(id)arg1;
- (void)find:(id)arg1;
- (void)findAndReplace:(id)arg1;
- (void)findNext:(id)arg1;
- (void)findPrevious:(id)arg1;
- (void)increaseSize:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (void)move:(id)arg1;
- (void)paste:(id)arg1;
- (void)pasteAndGo:(id)arg1;
- (void)pasteAndMatchStyle:(id)arg1;
- (void)pasteAndSearch:(id)arg1;
- (void)print:(id)arg1;
- (void)rename:(id)arg1;
- (void)select:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)toggleBoldface:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (void)updateTextAttributesWithConversionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSDictionary *, id /* block */, NSDictionary *, void*
- (void)useSelectionForFind:(id)arg1;

@end
