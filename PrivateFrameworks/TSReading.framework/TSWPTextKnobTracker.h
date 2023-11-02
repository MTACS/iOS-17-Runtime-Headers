
@interface TSWPTextKnobTracker : TSDKnobTracker {
    bool  _didShowMagnifier;
    bool  _doneTracking;
    TSWPEditingController * _editingController;
    unsigned long long  _headCharAtStart;
    bool  _ignoreNextCall;
    bool  _knobMoved;
    TSWPTextMagnifierRanged * _magnifier;
    bool  _multiTap;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _rangeAtStart;
    int  _selectionType;
    unsigned long long  _tailCharAtStart;
    NSTimer * _textMagnifierTimer;
}

@property (nonatomic, readonly) bool didShowMagnifier;
@property (nonatomic, retain) TSWPEditingController *editingController;
@property (nonatomic) bool ignoreNextCall;

+ (const void*)p_lineFragmentForCharIndex:(unsigned long long)arg1 knobTag:(unsigned long long)arg2 selectionType:(int)arg3 rep:(id)arg4;

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })adjustSelectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 forStorage:(id)arg2;
- (void)autoscrollWillNotStart;
- (void)dealloc;
- (double)delay;
- (bool)didShowMagnifier;
- (id)editingController;
- (void)endMovingKnob;
- (bool)fixupWordSelection;
- (id)icc;
- (bool)ignoreNextCall;
- (id)initWithRep:(id)arg1 knob:(id)arg2;
- (void)moveKnobToCanvasPosition:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned long long)p_charIndexForKnob:(unsigned long long)arg1 selection:(id)arg2;
- (void)p_cleanupWhenDone;
- (void)p_fixUpWordSelection;
- (bool)p_isMagnifyingVerticalText;
- (void)p_magnifyWithTarget:(id)arg1 magnificationPoint:(struct CGPoint { double x1; double x2; })arg2 offset:(struct CGPoint { double x1; double x2; })arg3 animated:(bool)arg4 delayed:(bool)arg5;
- (bool)p_newHeadCharIndex:(unsigned long long)arg1 isPastTailCharIndex:(unsigned long long)arg2 rep:(id)arg3;
- (bool)p_newTailCharIndex:(unsigned long long)arg1 isPastHeadCharIndex:(unsigned long long)arg2 rep:(id)arg3;
- (id)p_rangedMagnifier;
- (void)p_setSelectionFromPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)p_startMagnifying;
- (void)p_stopMagnifyingWithAnimation:(bool)arg1;
- (void)setEditingController:(id)arg1;
- (void)setIgnoreNextCall:(bool)arg1;
- (bool)shouldHideOtherKnobs;
- (double)unscaledStartAutoscrollThreshold;
- (void)updateAfterAutoscroll:(id)arg1;
- (void)updateAfterAutoscroll:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;

@end
