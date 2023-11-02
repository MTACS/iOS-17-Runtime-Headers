
@interface NUIContainerStackView : NUIContainerView <_NUIGridArrangementContainer> {
    struct _NUIGridArrangement { 
        <_NUIGridArrangementContainer> *container; 
        unsigned int horzDist : 8; 
        unsigned int vertDist : 8; 
        bool baselineRelative; 
        bool hasValidMeasurement; 
        struct vector<_NUIGridArrangementCell, std::allocator<_NUIGridArrangementCell>> { 
            struct _NUIGridArrangementCell {} *__begin_; 
            struct _NUIGridArrangementCell {} *__end_; 
            struct __compressed_pair<_NUIGridArrangementCell *, std::allocator<_NUIGridArrangementCell>> { 
                struct _NUIGridArrangementCell {} *__value_; 
            } __end_cap_; 
        } cells; 
        struct vector<_NUIGridArrangementDimension, std::allocator<_NUIGridArrangementDimension>> { 
            struct _NUIGridArrangementDimension {} *__begin_; 
            struct _NUIGridArrangementDimension {} *__end_; 
            struct __compressed_pair<_NUIGridArrangementDimension *, std::allocator<_NUIGridArrangementDimension>> { 
                struct _NUIGridArrangementDimension {} *__value_; 
            } __end_cap_; 
        } columns; 
        struct vector<_NUIGridArrangementDimension, std::allocator<_NUIGridArrangementDimension>> { 
            struct _NUIGridArrangementDimension {} *__begin_; 
            struct _NUIGridArrangementDimension {} *__end_; 
            struct __compressed_pair<_NUIGridArrangementDimension *, std::allocator<_NUIGridArrangementDimension>> { 
                struct _NUIGridArrangementDimension {} *__value_; 
            } __end_cap_; 
        } rows; 
        struct vector<CGRect, std::allocator<CGRect>> { 
            struct CGRect {} *__begin_; 
            struct CGRect {} *__end_; 
            struct __compressed_pair<CGRect *, std::allocator<CGRect>> { 
                struct CGRect {} *__value_; 
            } __end_cap_; 
        } viewFrames; 
    }  _arrangement;
    struct map<UIView *, double, std::less<UIView *>, std::allocator<std::pair<UIView *const, double>>> { 
        struct __tree<std::__value_type<UIView *, double>, std::__map_value_compare<UIView *, std::__value_type<UIView *, double>, std::less<UIView *>>, std::allocator<std::__value_type<UIView *, double>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<UIView *, double>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<UIView *, std::__value_type<UIView *, double>, std::less<UIView *>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _customSpacings;
    double  _spacing;
    struct { 
        unsigned int alignment : 8; 
        unsigned int distribution : 8; 
        unsigned int axis : 4; 
    }  _stackViewFlags;
    struct { 
        unsigned short width; 
        unsigned short height; 
    }  _visibleCount;
}

@property (nonatomic) long long alignment;
@property (nonatomic) long long axis;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long distribution;
@property (readonly) unsigned long long hash;
@property (nonatomic) double spacing;
@property (readonly) Class superclass;

+ (id)containerStackViewWithAxis:(long long)arg1 arrangedSubviews:(id)arg2;
+ (id)horizontalContainerStackViewWithArrangedSubviews:(id)arg1;
+ (id)verticalContainerStackViewWithArrangedSubviews:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)alignment;
- (id)arrangedDebugDescription;
- (long long)axis;
- (struct CGSize { double x1; double x2; })calculateArrangedSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (id)calculateViewForFirstBaselineLayout;
- (id)calculateViewForLastBaselineLayout;
- (double)customSpacingAfterView:(id)arg1;
- (void)dealloc;
- (id)debugDictionary;
- (void)didRemoveArrangedSubview:(id)arg1 atIndex:(long long)arg2;
- (long long)distribution;
- (id)initWithArrangedSubviews:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidateInternalStateForInvalidation:(long long)arg1;
- (void)layoutArrangedSubviewsInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)needsBaselineDebugBoundingBoxesForArrangedSubview:(id)arg1;
- (void)populateGridArrangementCells:(void*)arg1;
- (void)populateGridArrangementDimension:(void*)arg1 withCells:(const void*)arg2 axis:(long long)arg3;
- (void)setAlignment:(long long)arg1;
- (void)setAxis:(long long)arg1;
- (void)setBaselineRelativeArrangement:(bool)arg1;
- (void)setCustomSpacing:(double)arg1 afterView:(id)arg2;
- (void)setDistribution:(long long)arg1;
- (void)setSpacing:(double)arg1;
- (void)setSpacing:(double)arg1 afterArrangedSubviewAtIndex:(long long)arg2;
- (double)spacing;

@end
