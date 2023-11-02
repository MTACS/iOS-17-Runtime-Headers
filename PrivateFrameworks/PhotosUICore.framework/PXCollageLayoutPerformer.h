
@interface PXCollageLayoutPerformer : PXBaseLayoutPerformer <PXLayoutPerformer> {
    double  _interItemSpacing;
    NSMutableArray * _mutableChildren;
    long long  _numberOfVisibleItems;
    double  _outerLayoutRatio;
    bool  _portraitBias;
    PXLeafLayoutPerformer * _singleItemPerformer;
    PXSplitLayoutPerformer * _threeItemNestedPerformer;
    PXSplitLayoutPerformer * _threeItemPerformer;
    PXSplitLayoutPerformer * _twoItemPerformer;
}

@property (nonatomic, readonly) NSArray *children;
@property (nonatomic) double interItemSpacing;
@property (nonatomic) struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; bool x2; struct { long long x_3_1_1; long long x_3_1_2; long long x_3_1_3; long long x_3_1_4; } x3; } layoutInput;
@property (nonatomic, retain) PXLayoutPerformerOutput *layoutOutput;
@property (nonatomic, retain) NSMutableArray *mutableChildren;
@property (nonatomic) long long numberOfVisibleItems;
@property (nonatomic) double outerLayoutRatio;
@property (nonatomic) bool portraitBias;
@property (nonatomic, retain) PXLeafLayoutPerformer *singleItemPerformer;
@property (nonatomic, retain) PXSplitLayoutPerformer *threeItemNestedPerformer;
@property (nonatomic, retain) PXSplitLayoutPerformer *threeItemPerformer;
@property (nonatomic, retain) PXSplitLayoutPerformer *twoItemPerformer;

+ (struct CGSize { double x1; double x2; })performLayoutWithLayoutInput:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; bool x2; struct { long long x_3_1_1; long long x_3_1_2; long long x_3_1_3; long long x_3_1_4; } x3; })arg1 layoutOutput:(id)arg2 usingBlock:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)children;
- (id)init;
- (double)interItemSpacing;
- (id)mutableChildren;
- (long long)numberOfVisibleItems;
- (double)outerLayoutRatio;
- (struct CGSize { double x1; double x2; })performLayout;
- (bool)portraitBias;
- (void)prepareForReuse;
- (void)setInterItemSpacing:(double)arg1;
- (void)setMutableChildren:(id)arg1;
- (void)setNumberOfVisibleItems:(long long)arg1;
- (void)setOuterLayoutRatio:(double)arg1;
- (void)setPortraitBias:(bool)arg1;
- (void)setSingleItemPerformer:(id)arg1;
- (void)setThreeItemNestedPerformer:(id)arg1;
- (void)setThreeItemPerformer:(id)arg1;
- (void)setTwoItemPerformer:(id)arg1;
- (id)singleItemPerformer;
- (id)threeItemNestedPerformer;
- (id)threeItemPerformer;
- (id)twoItemPerformer;

@end
