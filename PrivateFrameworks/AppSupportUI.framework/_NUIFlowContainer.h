
@interface _NUIFlowContainer : NSObject <_NUIGridArrangementContainer> {
    const void * _flowArrangement;
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
    }  _gridArrangement;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)canCancelMeasurementForCompression;
- (struct CGSize { double x1; double x2; })contentLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 forArrangedSubview:(id)arg2;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layoutFrameForArrangedSubview:(id)arg1 withProposedContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)populateGridArrangementCells:(void*)arg1;
- (void)populateGridArrangementDimension:(void*)arg1 withCells:(const void*)arg2 axis:(long long)arg3;
- (bool)shouldCancelMeasurementForCompressionInAxis:(long long)arg1;

@end
