
@interface NUIBoxArrangement : NSObject <_NUIBoxArrangementContainer> {
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
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    <NUIArrangementContainer> * _container;
    <NUIBoxArrangementDataSource> * _dataSource;
    struct { 
        unsigned int containerDirection : 1; 
    }  _flags;
    double  _scale;
}

@property (nonatomic, readonly) <NUIArrangementContainer> *container;
@property (nonatomic, readonly) <NUIBoxArrangementDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)container;
- (struct CGSize { double x1; double x2; })contentLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 forArrangedSubview:(id)arg2;
- (id)dataSource;
- (void)dealloc;
- (id)initWithContainer:(id)arg1 dataSource:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layoutFrameForArrangedSubview:(id)arg1 withProposedContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGSize { double x1; double x2; })layoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)populateBoxArrangementCells:(void*)arg1;
- (void)positionItemsInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 block:(id /* block */)arg2;
- (void)reloadData;

@end
