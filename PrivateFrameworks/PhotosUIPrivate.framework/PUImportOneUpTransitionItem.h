
@interface PUImportOneUpTransitionItem : NSObject {
    PXImportItemViewModel * _importItem;
    struct PXSimpleIndexPath { 
        long long dataSourceIdentifier; 
        long long section; 
        long long item; 
        long long subitem; 
    }  _indexPath;
    double  _initialContentAlpha;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialFrame;
    UIImage * _snapshotImage;
    double  _targetContentAlpha;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _targetFrame;
    UIView * _transitionView;
}

@property (nonatomic, readonly) PXImportItemViewModel *importItem;
@property (nonatomic, readonly) struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; } indexPath;
@property (nonatomic) double initialContentAlpha;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } initialFrame;
@property (nonatomic, retain) UIImage *snapshotImage;
@property (nonatomic) double targetContentAlpha;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } targetFrame;
@property (nonatomic, retain) UIView *transitionView;

- (void).cxx_destruct;
- (id)importItem;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })indexPath;
- (id)initWithInitialFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 snapshotImage:(id)arg2 importItem:(id)arg3 indexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg4;
- (double)initialContentAlpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialFrame;
- (void)setInitialContentAlpha:(double)arg1;
- (void)setInitialFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSnapshotImage:(id)arg1;
- (void)setTargetContentAlpha:(double)arg1;
- (void)setTargetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTransitionView:(id)arg1;
- (id)snapshotImage;
- (double)targetContentAlpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetFrame;
- (id)transitionView;

@end
