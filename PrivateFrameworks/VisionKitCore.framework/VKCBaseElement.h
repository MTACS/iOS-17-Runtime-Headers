
@interface VKCBaseElement : NSObject {
    NSArray * _components;
    CROutputRegion * _crOutputRegion;
    VKCBaseElement * _parent;
    CRDocumentOutputRegion * _parentCRDocument;
    VKQuad * _quad;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (nonatomic, readonly) NSArray *children;
@property (nonatomic, readonly) NSArray *components;
@property (nonatomic, readonly) int confidence;
@property (nonatomic, retain) CROutputRegion *crOutputRegion;
@property (nonatomic, readonly) long long elementType;
@property (nonatomic, readonly) bool hasChildren;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } imageSpaceBoundingBox;
@property (nonatomic, readonly) unsigned long long numberOfChildren;
@property (nonatomic) VKCBaseElement *parent;
@property (nonatomic, retain) CRDocumentOutputRegion *parentCRDocument;
@property (nonatomic, retain) VKQuad *quad;
@property (nonatomic, readonly) NSString *stringValue;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (id)childAtIndex:(unsigned long long)arg1;
- (id)children;
- (id)components;
- (int)confidence;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)crOutputRegion;
- (id)description;
- (long long)elementType;
- (bool)hasChildren;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageSpaceBoundingBox;
- (bool)isInspectableCellSelectable;
- (void)loadInfoFromCROutputRegion:(id)arg1;
- (unsigned long long)numberOfChildren;
- (id)parent;
- (id)parentCRDocument;
- (id)quad;
- (id)recursiveSearchForCROutputRegion:(id)arg1;
- (void)setCrOutputRegion:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setParentCRDocument:(id)arg1;
- (void)setQuad:(id)arg1;
- (id)stringValue;
- (long long)type;

@end
