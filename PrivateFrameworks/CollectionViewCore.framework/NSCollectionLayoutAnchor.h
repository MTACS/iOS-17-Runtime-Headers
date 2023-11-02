
@interface NSCollectionLayoutAnchor : NSObject <NSCopying> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorPoint;
    unsigned long long  _edges;
    struct CGPoint { 
        double x; 
        double y; 
    }  _offset;
    bool  _offsetIsUnitOffset;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } anchorPoint;
@property (nonatomic) unsigned long long edges;
@property (nonatomic, readonly) bool isAbsoluteOffset;
@property (nonatomic, readonly) bool isFractionalOffset;
@property (nonatomic) struct CGPoint { double x1; double x2; } offset;
@property (nonatomic) bool offsetIsUnitOffset;

+ (id)layoutAnchorWithAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)layoutAnchorWithAnchorPoint:(struct CGPoint { double x1; double x2; })arg1 offset:(struct CGPoint { double x1; double x2; })arg2;
+ (id)layoutAnchorWithAnchorPoint:(struct CGPoint { double x1; double x2; })arg1 unitOffset:(struct CGPoint { double x1; double x2; })arg2;
+ (id)layoutAnchorWithEdges:(unsigned long long)arg1;
+ (id)layoutAnchorWithEdges:(unsigned long long)arg1 absoluteOffset:(struct CGPoint { double x1; double x2; })arg2;
+ (id)layoutAnchorWithEdges:(unsigned long long)arg1 fractionalOffset:(struct CGPoint { double x1; double x2; })arg2;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_itemFrameForContainerRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 itemSize:(struct CGSize { double x1; double x2; })arg2 itemLayoutAnchor:(id)arg3;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)edges;
- (id)initWithEdges:(unsigned long long)arg1 offset:(struct CGPoint { double x1; double x2; })arg2 anchorPoint:(struct CGPoint { double x1; double x2; })arg3 offsetIsUnitOffset:(bool)arg4;
- (bool)isAbsoluteOffset;
- (bool)isEqual:(id)arg1;
- (bool)isFractionalOffset;
- (struct CGPoint { double x1; double x2; })offset;
- (bool)offsetIsUnitOffset;
- (void)setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setEdges:(unsigned long long)arg1;
- (void)setOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOffsetIsUnitOffset:(bool)arg1;

@end
