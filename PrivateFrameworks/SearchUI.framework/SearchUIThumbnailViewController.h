
@interface SearchUIThumbnailViewController : SearchUILeadingViewController

@property (nonatomic, retain) SearchUIImageView *view;

+ (void)applyImageConstraintsToImageView:(id)arg1 isCompact:(bool)arg2 preventThumbnailScaling:(bool)arg3 usesCompactWidth:(bool)arg4;
+ (id)compactSymbolFont;
+ (long long)compactSymbolScale;
+ (bool)rowModelHasSuggestionThumbnail:(id)arg1;
+ (bool)supportsRowModel:(id)arg1;

- (id)imageForRowModel:(id)arg1 appearance:(id)arg2;
- (void)setUsesCompactWidth:(bool)arg1;
- (id)setupView;
- (bool)shouldVerticallyCenter;
- (void)tlk_updateForAppearance:(id)arg1;
- (unsigned long long)type;
- (void)updateWithRowModel:(id)arg1;

@end
