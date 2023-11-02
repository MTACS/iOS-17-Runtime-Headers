
@interface PXStoryStyleScrollContentLayout : PXGLayout <PXChangeObserver> {
    unsigned int  _firstPageSpriteIndex;
    double  _focusOffset;
    long long  _focusedStyleIndex;
    PXStoryModel * _model;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _postUpdateFlags;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double focusOffset;
@property (nonatomic, readonly) long long focusedStyleIndex;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXStoryModel *model;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidateContent;
- (void)_invalidateFocusedStyle;
- (void)_updateContent;
- (void)_updateFocusedStyle;
- (void)adjustScrollTargetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2;
- (id)createAnchorForScrollingToStyleFocus:(double)arg1;
- (double)focusOffset;
- (long long)focusedStyleIndex;
- (id)init;
- (id)initWithModel:(id)arg1;
- (id)model;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)referenceSizeDidChange;
- (void)update;
- (void)visibleRectDidChange;

@end
