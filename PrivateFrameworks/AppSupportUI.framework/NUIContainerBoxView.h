
@interface NUIContainerBoxView : NUIContainerView <_NUIBoxArrangementContainer, _UIMultilineTextContentSizing> {
    struct _NUIBoxArrangement { 
        <_NUIBoxArrangementContainer> *container; 
        long long horzDist; 
        long long vertDist; 
        bool hasValidMeasurement; 
        struct vector<_NUIBoxArrangementCell, std::allocator<_NUIBoxArrangementCell>> { 
            struct _NUIBoxArrangementCell {} *__begin_; 
            struct _NUIBoxArrangementCell {} *__end_; 
            struct __compressed_pair<_NUIBoxArrangementCell *, std::allocator<_NUIBoxArrangementCell>> { 
                struct _NUIBoxArrangementCell {} *__value_; 
            } __end_cap_; 
        } cells; 
        struct CGSize { 
            double width; 
            double height; 
        } measureSize; 
        struct vector<CGRect, std::allocator<CGRect>> { 
            struct CGRect {} *__begin_; 
            struct CGRect {} *__end_; 
            struct __compressed_pair<CGRect *, std::allocator<CGRect>> { 
                struct CGRect {} *__value_; 
            } __end_cap_; 
        } viewFrames; 
        struct { 
            double baseLineFromTop; 
            double baseLineFromBottom; 
        } maxBaseLinePair; 
    }  _arrangement;
    struct { 
        unsigned int horzAlign : 8; 
        unsigned int vertAlign : 8; 
    }  _boxFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long horizontalAlignment;
@property (readonly) Class superclass;
@property (nonatomic) long long verticalAlignment;

+ (id)containerBoxViewWithArrangedSubviews:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)arrangedDebugDescription;
- (struct CGSize { double x1; double x2; })calculateArrangedSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (id)calculateViewForFirstBaselineLayout;
- (id)calculateViewForLastBaselineLayout;
- (void)dealloc;
- (id)debugDictionary;
- (long long)horizontalAlignment;
- (id)initWithArrangedSubviews:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidateInternalStateForInvalidation:(long long)arg1;
- (void)layoutArrangedSubviewsInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)needsBaselineDebugBoundingBoxesForArrangedSubview:(id)arg1;
- (void)populateBoxArrangementCells:(void*)arg1;
- (void)setHorizontalAlignment:(long long)arg1;
- (void)setVerticalAlignment:(long long)arg1;
- (long long)verticalAlignment;

@end
