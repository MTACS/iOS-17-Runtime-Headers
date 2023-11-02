
@interface NSTextLineFragment : NSObject <NSSecureCoding> {
    id /* block */  __renderingAttributeOverridesProvider;
    struct __CTRun { } * _activeRun;
    long long  _activeRunIndex;
    struct CGSize { double x1; double x2; } * _advances;
    long long  _applicationFrameworkContext;
    NSAttributedString * _attributedString;
    long long  _cachedCharacterIndex;
    double  _cachedFractionWithinGlyph;
    struct CGPoint { 
        double x; 
        double y; 
    }  _cachedPoint;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _characterRange;
    long long  _elasticGlyphCount;
    struct { 
        unsigned int rendersTextCorrectionMarkers : 1; 
        unsigned int isRTLLine : 1; 
    }  _flags;
    UIFont * _font;
    long long  _glyphCount;
    struct CGPoint { 
        double x; 
        double y; 
    }  _glyphOrigin;
    unsigned short * _glyphs;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _imageBounds;
    NSAttributedString * _lineBadge;
    struct __CTLine { } * _lineRef;
    double  _padding;
    id /* block */  _renderingAttributesProvider;
    NSTextLayoutFragment * _textLayoutFragment;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _typographicBounds;
}

@property (copy) id /* block */ _renderingAttributeOverridesProvider;
@property (readonly) NSAttributedString *attributedString;
@property (readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } characterRange;
@property (readonly) struct CGPoint { double x1; double x2; } glyphOrigin;
@property double padding;
@property (copy) id /* block */ renderingAttributesProvider;
@property bool rendersTextCorrectionMarkers;
@property NSTextLayoutFragment *textLayoutFragment;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } typographicBounds;

// Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_defaultRenderingAttributesAtCharacterIndex:(long long)arg1 effectiveRange:(out struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (void)_drawMarkedTextBackground:(id)arg1 inTextRange:(id)arg2 atOrigin:(struct CGPoint { double x1; double x2; })arg3 graphicsContext:(id)arg4;
- (bool)_drawMarkedTextIndicatorAtPoint:(struct CGPoint { double x1; double x2; })arg1 graphicsContext:(id)arg2 backgroundOnly:(bool)arg3;
- (void)_drawMarkedTextUnderline:(id)arg1 inTextRange:(id)arg2 atOrigin:(struct CGPoint { double x1; double x2; })arg3 graphicsContext:(id)arg4;
- (void)_drawTexCorrectionMarker:(long long)arg1 characterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 atOrigin:(struct CGPoint { double x1; double x2; })arg3 graphicsContext:(id)arg4;
- (void)_enumerateTextAttachmentFramesInCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingBlock:(id /* block */)arg2;
- (void)_enumerateTextSegmentsInCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingBlock:(id /* block */)arg2;
- (struct __CTRun { }*)_findRunForStringIndex:(long long)arg1 runIndex:(out long long*)arg2;
- (void)_getCaretPositionsForCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 positionsCache:(inout double**)arg2 positionsCacheSize:(inout unsigned long long*)arg3 block:(id /* block */)arg4;
- (void)_processCaretGlyphRunForTextSelectionProvider:(id)arg1 baseLocation:(id)arg2 runRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 glyphOffset:(double)arg4 positionsCache:(inout double**)arg5 positionsCacheSize:(inout unsigned long long*)arg6 stop:(inout bool*)arg7 usingBlock:(id /* block */)arg8;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfLigatureContainingCharacterIndex:(unsigned long long)arg1;
- (id /* block */)_renderingAttributeOverridesProvider;
- (bool)_selectionColorShouldOverrideColor:(id)arg1;
- (void)_setColor:(id)arg1 inGraphicsContext:(id)arg2;
- (void)_setCurrentGraphicsContext:(id)arg1 duringBlock:(id /* block */)arg2;
- (long long)applicationFrameworkContext;
- (id)attributedString;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsWithType:(long long)arg1 options:(unsigned long long)arg2;
- (long long)characterIndexForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (long long)characterIndexForPoint:(struct CGPoint { double x1; double x2; })arg1 fractionOfDistanceThroughGlyph:(double*)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })characterRange;
- (void)dealloc;
- (id)description;
- (void)drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 context:(struct CGContext { }*)arg2;
- (void)drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 graphicsContext:(id)arg2;
- (void)drawAtPoint:(struct CGPoint { double x1; double x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (bool)drawMarkedTextBackgroundAtPoint:(struct CGPoint { double x1; double x2; })arg1 graphicsContext:(id)arg2;
- (void)drawMarkedTextIndicatorAtPoint:(struct CGPoint { double x1; double x2; })arg1 context:(struct CGContext { }*)arg2;
- (void)drawMarkedTextIndicatorAtPoint:(struct CGPoint { double x1; double x2; })arg1 graphicsContext:(id)arg2;
- (void)drawTextAttachmentsAtPoint:(struct CGPoint { double x1; double x2; })arg1 graphicsContext:(id)arg2;
- (void)drawTextCorrectionMarkersAtPoint:(struct CGPoint { double x1; double x2; })arg1 context:(struct CGContext { }*)arg2;
- (void)drawTextCorrectionMarkersAtPoint:(struct CGPoint { double x1; double x2; })arg1 graphicsContext:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateCaretOffsetsWithTextSelectionDataSource:(id)arg1 baseLocation:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateTextSegmentBoundsInTextRange:(id)arg1 usingBlock:(id /* block */)arg2;
- (double)fractionOfDistanceThroughGlyphForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })glyphOrigin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageBounds;
- (id)initWithAttributedString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 attributes:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)invalidateCache;
- (id)lineBadge;
- (struct __CTLine { }*)lineRef;
- (struct CGPoint { double x1; double x2; })locationForCharacterAtIndex:(long long)arg1;
- (unsigned long long)numberOfGlyphs;
- (double)padding;
- (id /* block */)renderingAttributesProvider;
- (bool)rendersTextCorrectionMarkers;
- (void)setApplicationFrameworkContext:(long long)arg1;
- (void)setGlyphOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setGlyphs:(const unsigned short*)arg1 advances:(const struct CGSize { double x1; double x2; }*)arg2 count:(long long)arg3 elasticCount:(unsigned long long)arg4 font:(id)arg5;
- (void)setLineBadge:(id)arg1;
- (void)setLineRef:(struct __CTLine { }*)arg1;
- (void)setPadding:(double)arg1;
- (void)setRenderingAttributesProvider:(id /* block */)arg1;
- (void)setRendersTextCorrectionMarkers:(bool)arg1;
- (void)setTextLayoutFragment:(id)arg1;
- (void)setTypographicBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)set_renderingAttributeOverridesProvider:(id /* block */)arg1;
- (id)textLayoutFragment;
- (id)textLineFragmentRange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })typographicBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })typographicUsedBounds;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (unsigned long long)ck_animatingMentionsGlyphCount;
- (void)ck_enumerateRunsWithBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/EmojiKit.framework/EmojiKit

- (void)_emk_enumerateRunsWithBlock:(id /* block */)arg1;
- (unsigned long long)animatingGlyphCount_emk;

@end
