
@interface ICThumbnailConfiguration : NSObject {
    ICAppearanceInfo * _appearanceInfo;
    id  _associatedObject;
    NSString * _associatedObjectIdentifier;
    NSString * _associatedObjectTitle;
    UIColor * _backgroundColor;
    long long  _cacheLevel;
    id /* block */  _fallbackBlock;
    bool  _hasBorder;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredSize;
    double  _scale;
    long long  _thumbnailType;
    UITraitCollection * _traitCollection;
    ICThumbnailKey * _uniqueKey;
}

@property (nonatomic, readonly) ICAppearanceInfo *appearanceInfo;
@property (nonatomic, copy) id associatedObject;
@property (nonatomic, readonly, copy) NSString *associatedObjectIdentifier;
@property (nonatomic, copy) NSString *associatedObjectTitle;
@property (nonatomic, readonly, copy) UIColor *backgroundColor;
@property (nonatomic, readonly) long long cacheLevel;
@property (nonatomic, copy) id /* block */ fallbackBlock;
@property (nonatomic, readonly) bool hasBorder;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredSize;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) long long thumbnailType;
@property (nonatomic, retain) UITraitCollection *traitCollection;
@property (readonly, copy) ICThumbnailKey *uniqueKey;

- (void).cxx_destruct;
- (id)appearanceInfo;
- (id)associatedObject;
- (id)associatedObjectIdentifier;
- (id)associatedObjectTitle;
- (id)backgroundColor;
- (long long)cacheLevel;
- (id)debugDescription;
- (id /* block */)fallbackBlock;
- (bool)hasBorder;
- (id)initForAttachment:(id)arg1 preferredSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 appearanceInfo:(id)arg4;
- (id)initForAvatarWithParticipants:(id)arg1 preferredSize:(struct CGSize { double x1; double x2; })arg2 hasBorder:(bool)arg3;
- (id)initForLargeQuickNoteWidgetWithNote:(id)arg1 appearanceInfo:(id)arg2;
- (id)initForNoteGridWithNote:(id)arg1 preferredSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 appearanceInfo:(id)arg4;
- (id)initForNoteListWithFoundAttachment:(id)arg1 preferredSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 appearanceInfo:(id)arg4;
- (id)initForNoteListWithNote:(id)arg1 preferredSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 appearanceInfo:(id)arg4;
- (id)initForNoteNavigationBarIconWithNote:(id)arg1 preferredSize:(struct CGSize { double x1; double x2; })arg2;
- (id)initForSharePreviewThumbnailWithNote:(id)arg1 appearanceInfo:(id)arg2;
- (id)initForShareThumbnailWithNote:(id)arg1 appearanceInfo:(id)arg2;
- (id)initForShortcutsWithNote:(id)arg1 preferredSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 appearanceInfo:(id)arg4;
- (id)initForSmallQuickNoteWidgetWithNote:(id)arg1 appearanceInfo:(id)arg2;
- (id)initForSystemPaperChromeLayerWithThumbnailType:(long long)arg1 traitCollection:(id)arg2;
- (id)initForSystemPaperChromeWithNote:(id)arg1 appearanceInfo:(id)arg2;
- (id)initForSystemPaperPreviewWithNote:(id)arg1 appearanceInfo:(id)arg2;
- (id)initWithThumbnailType:(long long)arg1 associatedObject:(id)arg2 associatedObjectIdentifier:(id)arg3 associatedObjectTitle:(id)arg4 accountIdentifier:(id)arg5 cacheLevel:(long long)arg6 preferredSize:(struct CGSize { double x1; double x2; })arg7 scale:(double)arg8 appearanceInfo:(id)arg9 backgroundColor:(id)arg10 hasBorder:(bool)arg11;
- (id)initWithThumbnailType:(long long)arg1 uniqueKey:(id)arg2 associatedObject:(id)arg3 associatedObjectIdentifier:(id)arg4 associatedObjectTitle:(id)arg5 accountIdentifier:(id)arg6 cacheLevel:(long long)arg7 preferredSize:(struct CGSize { double x1; double x2; })arg8 scale:(double)arg9 appearanceInfo:(id)arg10 backgroundColor:(id)arg11 hasBorder:(bool)arg12;
- (struct CGSize { double x1; double x2; })preferredSize;
- (double)scale;
- (void)setAssociatedObject:(id)arg1;
- (void)setAssociatedObjectTitle:(id)arg1;
- (void)setFallbackBlock:(id /* block */)arg1;
- (void)setTraitCollection:(id)arg1;
- (long long)thumbnailType;
- (id)traitCollection;
- (id)uniqueKey;

@end
