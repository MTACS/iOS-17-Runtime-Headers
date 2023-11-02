
@interface CNCardPropertyGeminiGroup : CNCardPropertyGroup {
    bool  _shouldShowGemini;
}

@property (nonatomic) bool shouldShowGemini;

- (id)_loadPropertyItems;
- (id)displayItems;
- (id)editingItems;
- (void)setGeminiResult:(id)arg1;
- (void)setShouldShowGemini:(bool)arg1;
- (bool)shouldShowGemini;

@end
