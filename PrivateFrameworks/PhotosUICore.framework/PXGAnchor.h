
@interface PXGAnchor : NSObject <PXGDiagnosticsProvider, PXGSpriteIndexReferencing> {
    bool  _autoInvalidated;
    NSArray * _constraints;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    id  _context;
    id /* block */  _customOffset;
    NSDate * _date;
    <PXGAnchorDelegate> * _delegate;
    struct { 
        bool visibleRectOriginForProposedVisibleRectForLayout; 
    }  _delegateRespondsTo;
    unsigned long long  _edges;
    PXGLayout * _layout;
    bool  _needsUpdate;
    struct CGPoint { 
        double x; 
        double y; 
    }  _normalizedAnchorPoint;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    long long  _priority;
    unsigned long long  _referencingOptions;
    unsigned long long  _scrollPosition;
    NSArray * _spriteRects;
    NSArray * _spriteReferences;
    long long  _type;
    struct CGPoint { 
        double x; 
        double y; 
    }  _visibleLocation;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleRect;
}

@property (nonatomic, readonly) unsigned long long anchoredContentEdges;
@property (getter=isAutoInvalidated, nonatomic, readonly) bool autoInvalidated;
@property (nonatomic, readonly) bool canBeReused;
@property (nonatomic, copy) NSArray *constraints;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, retain) id context;
@property (nonatomic, copy) id /* block */ customOffset;
@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXGAnchorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *diagnosticDescription;
@property (nonatomic) unsigned long long edges;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isScrollingAnimationAnchor;
@property (nonatomic, readonly) PXGLayout *layout;
@property (nonatomic) bool needsUpdate;
@property (nonatomic) struct CGPoint { double x1; double x2; } normalizedAnchorPoint;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic) long long priority;
@property (nonatomic) unsigned long long referencingOptions;
@property (nonatomic) unsigned long long scrollPosition;
@property (nonatomic, readonly) bool shouldFaultInContentAtAnchoredContentEdges;
@property (nonatomic, copy) NSArray *spriteRects;
@property (nonatomic, copy) NSArray *spriteReferences;
@property (readonly) Class superclass;
@property (nonatomic) long long type;
@property (nonatomic) struct CGPoint { double x1; double x2; } visibleLocation;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;

- (void).cxx_destruct;
- (void)_enumerateSpriteConstraintsUsingBlock:(id /* block */)arg1;
- (void)adjustReferencedSpriteIndexesWithChangeDetails:(id)arg1 appliedToLayout:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)anchoredContentEdges;
- (unsigned int)anchoredSpriteIndexInLayout:(id)arg1;
- (id)autoInvalidate;
- (bool)canBeReused;
- (id)constraints;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)context;
- (id)copyWithLayout:(id)arg1;
- (id /* block */)customOffset;
- (id)date;
- (id)delegate;
- (id)description;
- (id)diagnosticDescription;
- (unsigned long long)edges;
- (void)enumerateAllSpriteReferencesUsingBlock:(id /* block */)arg1;
- (void)enumerateSpritesWithEnumerationOptions:(unsigned long long)arg1 referencingOptions:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (id)init;
- (id)initWithLayout:(id)arg1;
- (void)invalidate;
- (bool)isAutoInvalidated;
- (bool)isScrollingAnimationAnchor;
- (id)layout;
- (bool)needsUpdate;
- (struct CGPoint { double x1; double x2; })normalizedAnchorPoint;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (long long)priority;
- (unsigned long long)referencingOptions;
- (unsigned long long)scrollPosition;
- (void)setConstraints:(id)arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContext:(id)arg1;
- (void)setCustomOffset:(id /* block */)arg1;
- (void)setDate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEdges:(unsigned long long)arg1;
- (void)setNeedsUpdate:(bool)arg1;
- (void)setNormalizedAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPriority:(long long)arg1;
- (void)setReferencingOptions:(unsigned long long)arg1;
- (void)setScrollPosition:(unsigned long long)arg1;
- (void)setSpriteRects:(id)arg1;
- (void)setSpriteReferences:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setVisibleLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldFaultInContentAtAnchoredContentEdges;
- (id)spriteRects;
- (id)spriteReferences;
- (long long)type;
- (struct CGPoint { double x1; double x2; })visibleLocation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;

@end
