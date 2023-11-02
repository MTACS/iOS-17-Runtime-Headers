
@interface CAMFullscreenModeSelector : UIView <UIGestureRecognizerDelegate> {
    long long  __highlightedIndex;
    NSArray * __modes;
    long long  __state;
    UIView * __titleContainer;
    NSDictionary * __titleViewsByMode;
    struct CGPoint { 
        double x; 
        double y; 
    }  __touchBeganPosition;
    double  __touchBeganTime;
    <CAMFullscreenModeSelectorDataSource> * _dataSource;
    <CAMFullscreenModeSelectorDelegate> * _delegate;
    long long  _selectedMode;
}

@property (setter=_setHighlightedIndex:, nonatomic) long long _highlightedIndex;
@property (setter=_setModes:, nonatomic, retain) NSArray *_modes;
@property (setter=_setState:, nonatomic) long long _state;
@property (nonatomic, readonly) UIView *_titleContainer;
@property (nonatomic, readonly) double _titleIndexOffset;
@property (setter=_setItems:, nonatomic, retain) NSDictionary *_titleViewsByMode;
@property (setter=_setTouchBeganPosition:, nonatomic) struct CGPoint { double x1; double x2; } _touchBeganPosition;
@property (setter=_setTouchBeganTime:, nonatomic) double _touchBeganTime;
@property (nonatomic) <CAMFullscreenModeSelectorDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CAMFullscreenModeSelectorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long selectedMode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_highlightedIndex;
- (id)_modeTitleForLegacyTitle:(id)arg1;
- (id)_modes;
- (void)_selectModeAtIndex:(long long)arg1;
- (void)_setHighlightedIndex:(long long)arg1;
- (void)_setItems:(id)arg1;
- (void)_setModes:(id)arg1;
- (void)_setSelectedMode:(long long)arg1 shouldNotify:(bool)arg2;
- (void)_setState:(long long)arg1;
- (void)_setTouchBeganPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setTouchBeganTime:(double)arg1;
- (long long)_state;
- (id)_titleContainer;
- (long long)_titleIndexForY:(double)arg1;
- (double)_titleIndexOffset;
- (id)_titleViewsByMode;
- (double)_titleYForIndex:(long long)arg1;
- (struct CGPoint { double x1; double x2; })_touchBeganPosition;
- (double)_touchBeganTime;
- (void)_touchSequenceBeganAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_touchSequenceChangedToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_touchSequenceEndedAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updateAlpha;
- (void)_updateTitles;
- (id)dataSource;
- (id)delegate;
- (void)enterTappableState;
- (void)handlePress:(id)arg1;
- (id)init;
- (void)layoutSubviews;
- (void)reloadData;
- (long long)selectedMode;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelectedMode:(long long)arg1;

@end
