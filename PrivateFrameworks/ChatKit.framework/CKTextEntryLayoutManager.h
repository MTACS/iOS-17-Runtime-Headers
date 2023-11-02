
@interface CKTextEntryLayoutManager : EMKLayoutManager {
    NSMutableDictionary * _animationsByIdentifier;
    UIColor * _currentMentionColor;
    struct CGSize { 
        double width; 
        double height; 
    }  _currentMentionOffset;
    double  _currentMentionScale;
    UIColor * _currentMentionShadowColor;
    NSMutableAttributedString * _mentionAttributes;
    NSTimer * _mentionTimer;
    <CKTextEntryLayoutManagerMentionsDelegate> * _mentionsDelegate;
}

@property (nonatomic, retain) NSMutableDictionary *animationsByIdentifier;
@property (nonatomic, retain) UIColor *currentMentionColor;
@property (nonatomic) struct CGSize { double x1; double x2; } currentMentionOffset;
@property (nonatomic) double currentMentionScale;
@property (nonatomic, retain) UIColor *currentMentionShadowColor;
@property (nonatomic, retain) NSMutableAttributedString *mentionAttributes;
@property (nonatomic, retain) NSTimer *mentionTimer;
@property (nonatomic) <CKTextEntryLayoutManagerMentionsDelegate> *mentionsDelegate;

- (void).cxx_destruct;
- (id)animationsByIdentifier;
- (id)currentMentionColor;
- (struct CGSize { double x1; double x2; })currentMentionOffset;
- (double)currentMentionScale;
- (id)currentMentionShadowColor;
- (void)drawAttributedMentionGlyphsForGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)drawGlyphsForGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)init;
- (bool)isAnyMentionAnimationActive;
- (id)mentionAttributes;
- (id)mentionTimer;
- (id)mentionsDelegate;
- (void)setAnimationsByIdentifier:(id)arg1;
- (void)setCurrentMentionColor:(id)arg1;
- (void)setCurrentMentionOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setCurrentMentionScale:(double)arg1;
- (void)setCurrentMentionShadowColor:(id)arg1;
- (void)setMentionAttributes:(id)arg1;
- (void)setMentionTimer:(id)arg1;
- (void)setMentionsDelegate:(id)arg1;
- (void)showCGGlyphs:(const unsigned short*)arg1 positions:(const struct CGPoint { double x1; double x2; }*)arg2 count:(long long)arg3 font:(id)arg4 textMatrix:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5 attributes:(id)arg6 inContext:(struct CGContext { }*)arg7;
- (void)startTimerIfNeeded;
- (void)stopTimerRemovingAttribute:(bool)arg1;
- (void)updateDisplayForMentionGlyphRangeRemovingAttribute:(bool)arg1;
- (void)updateMentionAttributes:(id)arg1;
- (void)updateMentionDisplay;

@end
