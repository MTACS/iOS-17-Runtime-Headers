
@interface NUIContainerFlowView : NUIContainerView <_NUIFlowArrangementContainer> {
    struct _NUIFlowArrangement { 
        <_NUIFlowArrangementContainer> *container; 
        unsigned int horzDist : 8; 
        unsigned int vertDist : 8; 
        bool baselineRelative; 
        unsigned long long columns; 
        double rowSpacing; 
        double itemSpacing; 
        double rowHeight; 
        double itemWidth; 
        struct vector<_NUIFlowArrangementCell, std::allocator<_NUIFlowArrangementCell>> { 
            struct _NUIFlowArrangementCell {} *__begin_; 
            struct _NUIFlowArrangementCell {} *__end_; 
            struct __compressed_pair<_NUIFlowArrangementCell *, std::allocator<_NUIFlowArrangementCell>> { 
                struct _NUIFlowArrangementCell {} *__value_; 
            } __end_cap_; 
        } cells; 
        /* Warning: unhandled struct encoding: '{vector<_NUIFlowRowContainer *, std::allocator<_NUIFlowRowContainer *>>="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<_NUIFlowRowContainer **, std::allocator<_NUIFlowRowContainer *>>="__value_"^@}}"flowContainer"@"_NUIFlowContainer""measuredWidth"d"viewFrames"{vector<CGRect, std::allocator<CGRect>>="__begin_"^{CGRect}"__end_"^{CGRect}"__end_cap_"{__compressed_pair<CGRect *, std::allocator<CGRect>>="__value_"^{CGRect}}}"maxBaseLinePair"{?="baseLineFromTop"d"baseLineFromBottom"d}}' */ struct vector<_NUIFlowRowContainer *, std::allocator<_NUIFlowRowContainer *>> { 
            __end_ **__begin_; 
        } rows; 
    }  _arrangement;
    struct { 
        unsigned int horzAlign : 8; 
        unsigned int vertAlign : 8; 
    }  _flowFlags;
}

@property (nonatomic) double columnSpacing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long horizontalAlignment;
@property (nonatomic) long long horizontalDistribution;
@property (nonatomic) double itemSpacing;
@property (nonatomic) double itemWidth;
@property (nonatomic) long long numberOfColumns;
@property (nonatomic) double rowHeight;
@property (nonatomic) double rowSpacing;
@property (readonly) Class superclass;
@property (nonatomic) long long verticalAlignment;
@property (nonatomic) long long verticalDistribution;

+ (id)containerFlowViewWithArrangedSubviews:(id)arg1;
+ (id)containerFlowViewWithNumberOfColumns:(long long)arg1 arrangedSubviews:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)alignmentForCell:(const struct _NUIFlowArrangementCell { id x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct { double x_4_1_1; double x_4_1_2; } x4; unsigned int x5 : 8; unsigned int x6 : 8; }*)arg1 inAxis:(long long)arg2;
- (id)arrangedDebugDescription;
- (struct CGSize { double x1; double x2; })calculateArrangedSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (id)calculateViewForFirstBaselineLayout;
- (id)calculateViewForLastBaselineLayout;
- (double)columnSpacing;
- (void)dealloc;
- (id)debugDictionary;
- (long long)distributionForRowAtIndex:(long long)arg1 ofTotalRowCount:(long long)arg2 withArrangedSubviews:(id)arg3;
- (long long)distributionForRowAtIndex:(long long)arg1 ofTotalRowCount:(long long)arg2 withCells:(const void*)arg3;
- (struct CGSize { double x1; double x2; })fittingSizeForCell:(const struct _NUIFlowArrangementCell { id x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct { double x_4_1_1; double x_4_1_2; } x4; unsigned int x5 : 8; unsigned int x6 : 8; }*)arg1 withProposedSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGSize { double x1; double x2; })fittingSizeForFlowPositioningOfArrangedSubview:(id)arg1 withProposedSize:(struct CGSize { double x1; double x2; })arg2;
- (long long)horizontalAlignment;
- (long long)horizontalDistribution;
- (id)initWithArrangedSubviews:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidateInternalStateForInvalidation:(long long)arg1;
- (bool)isLayoutSizeDependentOnPerpendicularAxis;
- (double)itemSpacing;
- (double)itemWidth;
- (void)layoutArrangedSubviewsInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)numberOfColumns;
- (void)populateFlowArrangementCells:(void*)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (double)rowHeight;
- (double)rowSpacing;
- (void)setColumnSpacing:(double)arg1;
- (void)setHorizontalAlignment:(long long)arg1;
- (void)setHorizontalDistribution:(long long)arg1;
- (void)setItemSpacing:(double)arg1;
- (void)setItemWidth:(double)arg1;
- (void)setNumberOfColumns:(long long)arg1;
- (void)setRowHeight:(double)arg1;
- (void)setRowSpacing:(double)arg1;
- (void)setVerticalAlignment:(long long)arg1;
- (void)setVerticalDistribution:(long long)arg1;
- (long long)verticalAlignment;
- (long long)verticalDistribution;

@end
