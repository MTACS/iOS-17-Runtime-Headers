
@interface SBContinuousExposeAutoLayoutSpace : NSObject <NSCopying, NSMutableCopying> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundingBox;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _compactedBoundingBox;
    SBContinuousExposeAutoLayoutConfiguration * _configuration;
    NSArray * _items;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _stageArea;
    bool  _stripVisible;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } compactedBoundingBox;
@property (nonatomic, retain) SBContinuousExposeAutoLayoutConfiguration *configuration;
@property (nonatomic, retain) NSArray *items;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } stageArea;
@property (getter=isStripVisible, nonatomic) bool stripVisible;

- (void).cxx_destruct;
- (id)_copyWithClass:(Class)arg1;
- (id)autoLayoutItemForDisplayItem:(id)arg1;
- (id)autoLayoutItemForDisplayItemIfExists:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })compactedBoundingBox;
- (id)configuration;
- (bool)containsDisplayItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (id)initWithItems:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isStripVisible;
- (id)items;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCompactedBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setConfiguration:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setStageArea:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setStripVisible:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })stageArea;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
