
@interface TSKAnnotationAuthor : TSPObject {
    TSUColor * mColor;
    NSString * mName;
}

@property (nonatomic, readonly) TSUColor *cellViolatorColor;
@property (nonatomic, readonly) TSUColor *changeAdornmentsColor;
@property (nonatomic, readonly) TSUColor *flagFillColor;
@property (nonatomic, readonly) TSUColor *flagPressedColor;
@property (nonatomic, readonly) TSUColor *flagStrokeColor;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) TSUColor *popoverColor;
@property (nonatomic, retain) TSUColor *storageColor;
@property (nonatomic, readonly) TSUColor *textHighlightColor;
@property (nonatomic, readonly) TSUColor *textMarkupColor;

+ (id)authorCellViolatorColorForIndex:(unsigned long long)arg1;
+ (id)authorChangeAdornmentsColorForIndex:(unsigned long long)arg1;
+ (id)authorColorAppearanceNameForIndex:(unsigned long long)arg1;
+ (id)authorColorNameForIndex:(unsigned long long)arg1;
+ (id)authorFlagFillColorForIndex:(unsigned long long)arg1;
+ (id)authorFlagPressedColorForIndex:(unsigned long long)arg1;
+ (id)authorFlagStrokeColorForIndex:(unsigned long long)arg1;
+ (id)authorPopoverColorForIndex:(unsigned long long)arg1;
+ (id)authorStorageColorForIndex:(unsigned long long)arg1;
+ (id)authorTextHighlightColorForIndex:(unsigned long long)arg1;
+ (id)authorTextMarkupColorForIndex:(unsigned long long)arg1;
+ (id)defaultAuthorName;
+ (unsigned long long)presetColorCount;

- (bool)allowsImplicitComponentOwnership;
- (id)cellViolatorColor;
- (id)changeAdornmentsColor;
- (id)componentRootObject;
- (void)dealloc;
- (id)description;
- (id)flagFillColor;
- (id)flagPressedColor;
- (id)flagStrokeColor;
- (unsigned long long)hash;
- (id)initWithContext:(id)arg1 name:(id)arg2 color:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)name;
- (unsigned long long)p_authorColorIndex;
- (id)popoverColor;
- (void)setName:(id)arg1;
- (void)setStorageColor:(id)arg1;
- (id)storageColor;
- (id)textHighlightColor;
- (id)textMarkupColor;

@end
