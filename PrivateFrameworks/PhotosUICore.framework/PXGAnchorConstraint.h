
@interface PXGAnchorConstraint : NSObject <NSCopying> {
    long long  _inequality;
    double  _offset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    unsigned long long  _referencingOptions;
    long long  _spriteAttribute;
    unsigned int  _spriteEdge;
    PXGSpriteReference * _spriteReference;
    bool  _visiblePortionOnly;
    unsigned int  _visibleRectEdge;
}

@property (nonatomic) long long inequality;
@property (nonatomic) double offset;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic) unsigned long long referencingOptions;
@property (nonatomic) long long spriteAttribute;
@property (nonatomic) unsigned int spriteEdge;
@property (nonatomic, retain) PXGSpriteReference *spriteReference;
@property (nonatomic) bool visiblePortionOnly;
@property (nonatomic) unsigned int visibleRectEdge;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)inequality;
- (double)offset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (unsigned long long)referencingOptions;
- (void)setInequality:(long long)arg1;
- (void)setOffset:(double)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setReferencingOptions:(unsigned long long)arg1;
- (void)setSpriteAttribute:(long long)arg1;
- (void)setSpriteEdge:(unsigned int)arg1;
- (void)setSpriteReference:(id)arg1;
- (void)setVisiblePortionOnly:(bool)arg1;
- (void)setVisibleRectEdge:(unsigned int)arg1;
- (long long)spriteAttribute;
- (unsigned int)spriteEdge;
- (id)spriteReference;
- (bool)visiblePortionOnly;
- (unsigned int)visibleRectEdge;

@end
